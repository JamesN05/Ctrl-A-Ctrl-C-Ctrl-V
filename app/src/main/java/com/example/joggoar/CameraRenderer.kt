package com.example.joggoar

import android.content.Context
import android.opengl.GLES20
import android.opengl.GLSurfaceView
import com.google.ar.core.Frame
import com.google.ar.core.Session
import javax.microedition.khronos.egl.EGLConfig
import javax.microedition.khronos.opengles.GL10

class CameraRenderer(
    private val context: Context,
    private val session: Session,
    // Lambda callback - sends each frame to MainActivity for face detection
    private val onFrameAvailable: (Frame) -> Unit
) : GLSurfaceView.Renderer {

    private val backgroundRenderer = BackgroundRenderer()
    private var displayRotationHelper: DisplayRotationHelper? = null

    override fun onSurfaceCreated(gl: GL10?, config: EGLConfig?) {
        GLES20.glClearColor(0f, 0f, 0f, 1f)
        backgroundRenderer.createOnGlThread(context)
        displayRotationHelper = DisplayRotationHelper(context)
    }

    override fun onSurfaceChanged(gl: GL10?, width: Int, height: Int) {
        GLES20.glViewport(0, 0, width, height)
        displayRotationHelper?.onSurfaceChanged(width, height)
    }

    override fun onDrawFrame(gl: GL10?) {
        GLES20.glClear(GLES20.GL_COLOR_BUFFER_BIT or GLES20.GL_DEPTH_BUFFER_BIT)
        try {
            // Give ARCore the texture ID to write the camera feed into
            session.setCameraTextureName(backgroundRenderer.textureId)
            displayRotationHelper?.updateSessionIfNeeded(session)

            val frame = session.update()

            // Draw camera background first - everything else renders on top
            backgroundRenderer.draw(frame)

            // Send frame to MainActivity for face detection processing
            onFrameAvailable(frame)

        } catch (e: Exception) {
            android.util.Log.e("Renderer", "Draw error: ${e.message}")
        }
    }
}