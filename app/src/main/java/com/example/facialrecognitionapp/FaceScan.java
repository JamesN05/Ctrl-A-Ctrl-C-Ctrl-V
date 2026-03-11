package com.example.facialrecognitionapp;

import android.graphics.Bitmap;
import android.content.Context;
import android.graphics.Rect;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

public class FaceScan {

    public static void cropAndSaveFace(Context context,
                                       Bitmap cameraFrame,
                                       Rect faceBounds) throws IOException {

        int faceX = Math.max(0, faceBounds.left);
        int faceY = Math.max(0, faceBounds.top);

        //Save image to a bitmap so we can save it to a file onto android phone before
        //transferring it to the database
        Bitmap facialScan = Bitmap.createBitmap(
                cameraFrame,
                faceX,
                faceY,
                200,
                200
        );

        File path = new File(context.getFilesDir(),
                             "ScannedFaces");
        if (!path.exists()) {

            boolean directoryCreated = path.mkdirs();

            if (!directoryCreated) {

                throw new IOException("Failed to create directory: " + path.getAbsolutePath());
            }
        }

        //Save to file
        File faceFile;
        int faceNumber = 1;

        do {

            faceFile = new File(path, "myface_" + Integer.toString(faceNumber) + ".jpg");
            faceNumber++;
        }
        while (faceFile.exists());

        try (FileOutputStream out = new FileOutputStream(faceFile)) {

            facialScan.compress(Bitmap.CompressFormat.JPEG, 100, out);
            out.flush();

        } catch (IOException e) {

            e.printStackTrace();
        }
    }
}
