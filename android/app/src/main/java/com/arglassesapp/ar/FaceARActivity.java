package com.arglassesapp.ar;

import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;

import com.arglassesapp.R;

public class FaceARActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_face_ar);

        if (savedInstanceState == null) {
            getSupportFragmentManager()
                    .beginTransaction()
                    .replace(R.id.face_ar_container, new FaceARFragment())
                    .commit();
        }
    }
}