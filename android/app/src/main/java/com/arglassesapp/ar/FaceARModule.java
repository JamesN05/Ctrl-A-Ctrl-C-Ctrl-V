package com.arglassesapp.ar;

import android.content.Intent;

import androidx.annotation.NonNull;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;

public class FaceARModule extends ReactContextBaseJavaModule {

    private final ReactApplicationContext reactContext;

    public FaceARModule(ReactApplicationContext reactContext) {
        super(reactContext);
        this.reactContext = reactContext;
    }

    @NonNull
    @Override
    public String getName() {
        return "FaceARModule";
    }

    @ReactMethod
    public void startFaceScan() {
        Intent intent = new Intent(reactContext, FaceARActivity.class);
        intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
        reactContext.startActivity(intent);
    }
}