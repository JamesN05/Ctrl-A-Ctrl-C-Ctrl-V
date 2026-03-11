package com.example.facialrecognitionapp;

import android.graphics.Bitmap;

public class FaceScan {

    static int faceX;
    static int faceY;

    public static void cropAndSaveFace(Bitmap cameraImage, int imageX, int imageY) {

        //Save image to a bitmap so we can save it to a file onto android phone before
        //transferring it to the database
        Bitmap facialScan = Bitmap.createBitmap(
                cameraImage,
                faceX = imageX,
                faceY = imageY,
                200,
                200
        );

        //Save to file
    }
}
