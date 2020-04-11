package com.example.enoticeboard;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    // views
    Button mRegisterBtn, mLoginBtn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // init views
        mRegisterBtn = findViewById(R.id.register_btn);
        mLoginBtn = findViewById(R.id.login_btn);

        // reg click
        mRegisterBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //startActivities(new Intent[]{new Intent(MainActivity.this, RegisterActivity.class)});
                startActivity(new Intent(MainActivity.this, RegisterActivity.class));
            }
        });

        // handle login button click
        mLoginBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //startActivities(new Intent[]{new Intent(MainActivity.this, LoginActivity.class)});
                startActivity(new Intent(MainActivity.this, LoginActivity.class));
            }
        });
    }

}
