public class SaveFace {

    public static void cropAndSaveFace(cameraImage, imageX, imageY) {

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

