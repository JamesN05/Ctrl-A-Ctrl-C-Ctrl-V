package com.example.joggoar

import android.content.Context
import android.os.Build
import android.view.Display
import android.view.WindowManager
import com.google.ar.core.Session

class DisplayRotationHelper(private val context: Context) {

    private var viewportChanged = false
    private var viewportWidth = 0
    private var viewportHeight = 0

    // Handle deprecated defaultDisplay on Android 11+ devices
    private val display: Display
        get() = if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            context.display!!
        } else {
            @Suppress("DEPRECATION")
            (context.getSystemService(Context.WINDOW_SERVICE) as WindowManager).defaultDisplay
        }

    fun onSurfaceChanged(width: Int, height: Int) {
        viewportWidth = width
        viewportHeight = height
        viewportChanged = true
    }

    // Call every frame to keep ARCore in sync with screen orientation
    fun updateSessionIfNeeded(session: Session) {
        if (viewportChanged) {
            session.setDisplayGeometry(display.rotation, viewportWidth, viewportHeight)
            viewportChanged = false
        }
    }

    fun getRotation() = display.rotation
}