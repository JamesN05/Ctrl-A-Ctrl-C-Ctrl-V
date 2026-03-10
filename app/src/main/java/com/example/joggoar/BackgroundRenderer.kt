package com.example.joggoar

import android.content.Context
import android.opengl.GLES11Ext
import android.opengl.GLES20
import com.google.ar.core.Coordinates2d
import com.google.ar.core.Frame
import java.nio.ByteBuffer
import java.nio.ByteOrder
import java.nio.FloatBuffer

class BackgroundRenderer {

    var textureId = -1
        private set

    private var programId = 0
    private var positionHandle = 0
    private var texCoordHandle = 0
    private var quadVertices: FloatBuffer
    private var quadTexCoords: FloatBuffer
    private var quadTexCoordsTransformed: FloatBuffer

    companion object {
        // Full screen quad vertices in NDC (-1 to 1)
        private val QUAD_VERTS = floatArrayOf(-1f, -1f, +1f, -1f, -1f, +1f, +1f, +1f)
        private val QUAD_TEX = floatArrayOf(0f, 1f, 1f, 1f, 0f, 0f, 1f, 0f)

        private const val VERTEX_SHADER = """
            attribute vec4 a_Position;
            attribute vec2 a_TexCoord;
            varying vec2 v_TexCoord;
            void main() {
                gl_Position = a_Position;
                v_TexCoord = a_TexCoord;
            }
        """

        // GL_OES_EGL_image_external extension required for Android camera textures
        private const val FRAGMENT_SHADER = """
            #extension GL_OES_EGL_image_external : require
            precision mediump float;
            varying vec2 v_TexCoord;
            uniform samplerExternalOES sTexture;
            void main() {
                gl_FragColor = texture2D(sTexture, v_TexCoord);
            }
        """
    }

    init {
        // Must use allocateDirect for OpenGL buffers - regular JVM heap won't work
        quadVertices = ByteBuffer.allocateDirect(QUAD_VERTS.size * 4)
            .order(ByteOrder.nativeOrder()).asFloatBuffer().apply { put(QUAD_VERTS); position(0) }
        quadTexCoords = ByteBuffer.allocateDirect(QUAD_TEX.size * 4)
            .order(ByteOrder.nativeOrder()).asFloatBuffer().apply { put(QUAD_TEX); position(0) }
        quadTexCoordsTransformed = ByteBuffer.allocateDirect(QUAD_TEX.size * 4)
            .order(ByteOrder.nativeOrder()).asFloatBuffer()
    }

    fun createOnGlThread(context: Context) {
        // Generate external OES texture - special type needed for camera feed
        val textures = IntArray(1)
        GLES20.glGenTextures(1, textures, 0)
        textureId = textures[0]

        GLES20.glBindTexture(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, textureId)
        GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_WRAP_S, GLES20.GL_CLAMP_TO_EDGE)
        GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_WRAP_T, GLES20.GL_CLAMP_TO_EDGE)
        GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MIN_FILTER, GLES20.GL_LINEAR)
        GLES20.glTexParameteri(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES20.GL_TEXTURE_MAG_FILTER, GLES20.GL_LINEAR)

        val vertShader = compileShader(GLES20.GL_VERTEX_SHADER, VERTEX_SHADER)
        val fragShader = compileShader(GLES20.GL_FRAGMENT_SHADER, FRAGMENT_SHADER)
        programId = GLES20.glCreateProgram()
        GLES20.glAttachShader(programId, vertShader)
        GLES20.glAttachShader(programId, fragShader)
        GLES20.glLinkProgram(programId)

        positionHandle = GLES20.glGetAttribLocation(programId, "a_Position")
        texCoordHandle = GLES20.glGetAttribLocation(programId, "a_TexCoord")
    }

    fun draw(frame: Frame) {
        // Recalculate texture coords if screen rotated or resized
        if (frame.hasDisplayGeometryChanged()) {
            frame.transformCoordinates2d(
                Coordinates2d.OPENGL_NORMALIZED_DEVICE_COORDINATES, quadVertices,
                Coordinates2d.TEXTURE_NORMALIZED, quadTexCoordsTransformed
            )
        }

        // Disable depth test - camera background always renders behind everything
        GLES20.glDisable(GLES20.GL_DEPTH_TEST)
        GLES20.glDepthMask(false)
        GLES20.glUseProgram(programId)
        GLES20.glBindTexture(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, textureId)

        quadVertices.position(0)
        GLES20.glVertexAttribPointer(positionHandle, 2, GLES20.GL_FLOAT, false, 0, quadVertices)
        GLES20.glEnableVertexAttribArray(positionHandle)

        quadTexCoordsTransformed.position(0)
        GLES20.glVertexAttribPointer(texCoordHandle, 2, GLES20.GL_FLOAT, false, 0, quadTexCoordsTransformed)
        GLES20.glEnableVertexAttribArray(texCoordHandle)

        GLES20.glDrawArrays(GLES20.GL_TRIANGLE_STRIP, 0, 4)

        GLES20.glDisableVertexAttribArray(positionHandle)
        GLES20.glDisableVertexAttribArray(texCoordHandle)
        GLES20.glDepthMask(true)
        GLES20.glEnable(GLES20.GL_DEPTH_TEST)
    }

    private fun compileShader(type: Int, code: String): Int {
        val shader = GLES20.glCreateShader(type)
        GLES20.glShaderSource(shader, code)
        GLES20.glCompileShader(shader)
        return shader
    }
}