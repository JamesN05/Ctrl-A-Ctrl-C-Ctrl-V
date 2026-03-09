public class SaveFace {

    public static void cropAndSaveFace(cameraImage, imageX, imageY) {

        //Save image to a bitmap so we can edit and crop it before storing to database
        Bitmap savedPicture = imageToBitmap(cameraImage);

        //Save a smaller picture to a bitmap
        Bitmap facialScan = Bitmap.createBitmap(
                savedPicture,
                faceX = imageX,
                faceY = imageY,
                200,
                200
        );

        //Save to file
    }
}

