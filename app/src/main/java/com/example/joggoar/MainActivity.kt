package com.example.joggoar

import android.Manifest
import android.content.pm.PackageManager
import android.graphics.RectF
import android.opengl.GLSurfaceView
import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import com.google.ar.core.*
import com.google.ar.core.exceptions.UnavailableArcoreNotInstalledException
import com.google.ar.core.exceptions.UnavailableDeviceNotCompatibleException

class MainActivity : AppCompatActivity() {

    private lateinit var arSession: Session
    private lateinit var overlayView: FaceOverlayView
    private lateinit var glSurfaceView: GLSurfaceView
    private var isSessionReady = false

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        overlayView = findViewById(R.id.face_overlay)
        glSurfaceView = findViewById(R.id.gl_surface_view)

        // Request camera permission - required for both camera feed and ARCore
        if (ContextCompat.checkSelfPermission(this, Manifest.permission.CAMERA)
            != PackageManager.PERMISSION_GRANTED) {
            ActivityCompat.requestPermissions(this, arrayOf(Manifest.permission.CAMERA), 100)
        } else {
            setupARSession()
        }
    }

    private fun setupARSession() {
        try {
            // Check device supports ARCore
            val availability = ArCoreApk.getInstance().checkAvailability(this)
            if (availability == ArCoreApk.Availability.UNSUPPORTED_DEVICE_NOT_CAPABLE) {
                Log.e("ARCore", "ARCore not supported on this device")
                return
            }

            // Prompt user to install ARCore if missing
            when (ArCoreApk.getInstance().requestInstall(this, true)) {
                ArCoreApk.InstallStatus.INSTALL_REQUESTED -> return
                ArCoreApk.InstallStatus.INSTALLED -> { /* continue */ }
            }

            arSession = Session(this)

            // Force front camera - required for face detection
            val filter = CameraConfigFilter(arSession)
            filter.facingDirection = CameraConfig.FacingDirection.FRONT
            val cameraConfigs = arSession.getSupportedCameraConfigs(filter)
            if (cameraConfigs.isNotEmpty()) {
                arSession.cameraConfig = cameraConfigs[0]
            }

            // Enable 3D face mesh mode
            val config = Config(arSession)
            config.augmentedFaceMode = Config.AugmentedFaceMode.MESH3D
            arSession.configure(config)

            isSessionReady = true

            // Set up OpenGL surface for camera rendering
            glSurfaceView.setEGLContextClientVersion(2)
            glSurfaceView.setRenderer(CameraRenderer(this, arSession) { frame ->
                // Each rendered frame is passed here for face detection
                detectFaces(frame)
            })
            glSurfaceView.renderMode = GLSurfaceView.RENDERMODE_CONTINUOUSLY

        } catch (e: UnavailableArcoreNotInstalledException) {
            Log.e("ARCore", "ARCore not installed: ${e.message}")
        } catch (e: UnavailableDeviceNotCompatibleException) {
            Log.e("ARCore", "Device not compatible: ${e.message}")
        } catch (e: Exception) {
            Log.e("ARSession", "Setup failed: ${e.message}")
        }
    }

    private fun detectFaces(frame: Frame) {
        try {
            // Get camera matrices needed to project 3D points onto 2D screen
            val projectionMatrix = FloatArray(16)
            val viewMatrix = FloatArray(16)
            frame.camera.getProjectionMatrix(projectionMatrix, 0, 0.1f, 100f)
            frame.camera.getViewMatrix(viewMatrix, 0)

            val faces = frame.getUpdatedTrackables(AugmentedFace::class.java)
            var faceDetected = false

            for (face in faces) {
                if (face.trackingState == TrackingState.TRACKING) {
                    drawFaceBox(face, projectionMatrix, viewMatrix)
                    faceDetected = true
                }
            }

            // Clear the box when no face is in frame
            if (!faceDetected) {
                runOnUiThread {
                    overlayView.faceRect = null
                    overlayView.faceVertices = emptyList()
                    overlayView.invalidate()
                }
            }

        } catch (e: Exception) {
            Log.e("ARCore", "Face detection error: ${e.message}")
        }
    }

    private fun drawFaceBox(face: AugmentedFace, projectionMatrix: FloatArray, viewMatrix: FloatArray) {
        val screenWidth = overlayView.width.toFloat()
        val screenHeight = overlayView.height.toFloat()

        // ARCore provides 3 landmark regions on the face
        val nosePose = face.getRegionPose(AugmentedFace.RegionType.NOSE_TIP)
        val leftPose = face.getRegionPose(AugmentedFace.RegionType.FOREHEAD_LEFT)
        val rightPose = face.getRegionPose(AugmentedFace.RegionType.FOREHEAD_RIGHT)
        val centerPose = face.centerPose

        val points = listOf(nosePose, leftPose, rightPose, centerPose)

        var minX = Float.MAX_VALUE; var maxX = Float.MIN_VALUE
        var minY = Float.MAX_VALUE; var maxY = Float.MIN_VALUE

        // Project each 3D landmark to 2D screen position
        for (pose in points) {
            val screen = projectToScreen(
                pose.tx(), pose.ty(), pose.tz(),
                viewMatrix, projectionMatrix,
                screenWidth, screenHeight
            ) ?: continue

            if (screen.first < minX) minX = screen.first
            if (screen.first > maxX) maxX = screen.first
            if (screen.second < minY) minY = screen.second
            if (screen.second > maxY) maxY = screen.second
        }

        // Add padding so box comfortably wraps entire face
        val padX = (maxX - minX) * 0.8f
        val padY = (maxY - minY) * 0.8f

        // Must update UI on main thread
        runOnUiThread {
            overlayView.faceVertices = emptyList()
            overlayView.faceRect = if (minX != Float.MAX_VALUE)
                RectF(minX - padX, minY - padY, maxX + padX, maxY + padY)
            else null
            overlayView.invalidate()
        }
    }

    // Converts a 3D world point to 2D screen coordinates using MVP matrix math
    private fun projectToScreen(
        x: Float, y: Float, z: Float,
        viewMatrix: FloatArray, projectionMatrix: FloatArray,
        screenWidth: Float, screenHeight: Float
    ): Pair<Float, Float>? {

        // Step 1: world space -> camera space (view matrix)
        val view = FloatArray(4)
        view[0] = viewMatrix[0]*x + viewMatrix[4]*y + viewMatrix[8]*z  + viewMatrix[12]
        view[1] = viewMatrix[1]*x + viewMatrix[5]*y + viewMatrix[9]*z  + viewMatrix[13]
        view[2] = viewMatrix[2]*x + viewMatrix[6]*y + viewMatrix[10]*z + viewMatrix[14]
        view[3] = viewMatrix[3]*x + viewMatrix[7]*y + viewMatrix[11]*z + viewMatrix[15]

        // Step 2: camera space -> clip space (projection matrix)
        val clip = FloatArray(4)
        clip[0] = projectionMatrix[0]*view[0] + projectionMatrix[4]*view[1] + projectionMatrix[8]*view[2]  + projectionMatrix[12]*view[3]
        clip[1] = projectionMatrix[1]*view[0] + projectionMatrix[5]*view[1] + projectionMatrix[9]*view[2]  + projectionMatrix[13]*view[3]
        clip[3] = projectionMatrix[3]*view[0] + projectionMatrix[7]*view[1] + projectionMatrix[11]*view[2] + projectionMatrix[15]*view[3]

        if (clip[3] == 0f) return null

        // Step 3: clip space -> NDC -> screen pixels
        val ndcX = clip[0] / clip[3]
        val ndcY = clip[1] / clip[3]
        return Pair(
            (ndcX + 1f) / 2f * screenWidth,
            (1f - ndcY) / 2f * screenHeight
        )
    }

    override fun onRequestPermissionsResult(
        requestCode: Int, permissions: Array<out String>, grantResults: IntArray
    ) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        if (requestCode == 100 && grantResults.firstOrNull() == PackageManager.PERMISSION_GRANTED) {
            setupARSession()
        } else {
            Log.e("Permission", "Camera permission denied")
        }
    }

    // GLSurfaceView must be paused/resumed alongside the activity
    override fun onResume() {
        super.onResume()
        if (isSessionReady) {
            arSession.resume()
            glSurfaceView.onResume()
        }
    }

    override fun onPause() {
        super.onPause()
        if (isSessionReady) {
            glSurfaceView.onPause()
            arSession.pause()
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        if (isSessionReady) arSession.close()
    }
}