import org.gradle.kotlin.dsl.implementation

plugins {
    alias(libs.plugins.android.application)
}

android {
    namespace = "com.example.joggoar"
    compileSdk {
        version = release(36) {
            minorApiLevel = 1
        }
    }

    defaultConfig {
        applicationId = "com.example.joggoar"
        minSdk = 36
        targetSdk = 36
        versionCode = 1
        versionName = "1.0"

        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }

   /* androidResources {
        noCompress += "so"
    }

    packaging {
        jniLibs {
            useLegacyPackaging = false
        }
    }
*/
    buildTypes {
        release {
            isMinifyEnabled = false
            proguardFiles(
                getDefaultProguardFile("proguard-android-optimize.txt"),
                "proguard-rules.pro"
            )
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }
}

dependencies {
    implementation(libs.androidx.core.ktx)
    implementation(libs.androidx.appcompat)
    implementation(libs.material)
    testImplementation(libs.junit)
    androidTestImplementation(libs.androidx.junit)
    androidTestImplementation(libs.androidx.espresso.core)
        implementation ("androidx.appcompat:appcompat:1.7.1")
        implementation ("androidx.core:core-ktx:1.17.0")

        // ARCore for face detection and AR session management
        implementation ("com.google.ar:core:1.52.0")
    }