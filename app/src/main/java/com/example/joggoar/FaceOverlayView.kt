package com.example.joggoar

import android.content.Context
import android.graphics.Canvas
import android.graphics.Color
import android.graphics.Paint
import android.graphics.RectF
import android.util.AttributeSet
import android.view.View

class FaceOverlayView @JvmOverloads constructor(
    context: Context,
    attrs: AttributeSet? = null,
    defStyleAttr: Int = 0
) : View(context, attrs, defStyleAttr) {

    // Green stroke paint for the bounding box
    private val boxPaint = Paint().apply {
        color = Color.GREEN
        style = Paint.Style.STROKE
        strokeWidth = 6f
    }

    // Set to null when no face detected - clears the canvas
    var faceRect: RectF? = null
    var faceVertices: List<Pair<Float, Float>> = emptyList()

    override fun onDraw(canvas: Canvas) {
        super.onDraw(canvas)
        // Only draw box when a face is actively being tracked
        faceRect?.let { canvas.drawRect(it, boxPaint) }
    }
}