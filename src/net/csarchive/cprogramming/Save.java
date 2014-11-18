package net.csarchive.cprogramming;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

import android.app.Activity;
import android.content.res.AssetManager;
import android.os.Bundle;
import android.os.Environment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

public class Save extends Activity implements View.OnClickListener{
	
	Button btnSaveAll;
	LayoutInflater inflater;
	View layout;
	TextView tv;
	ImageView iv;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.save);
		btnSaveAll = (Button) findViewById(R.id.btnSaveAll);
		btnSaveAll.setOnClickListener(this);
	}

	private void copyAssets() {
		// Get the SD card path and create a new folder for storing programs.
		AssetManager am = getAssets();
		String newFolder = "/C Programs";
	    String extStorageDirectory = Environment.getExternalStorageDirectory().toString();
	    File myNewFolder = new File(extStorageDirectory + newFolder);
	    myNewFolder.mkdir();
		String[] files = null;
		try {
			files = am.list("Programs/All");
		} catch (IOException e) {
			e.printStackTrace();
		}
		for(String fileName: files){
			InputStream is = null;
			OutputStream os = null;
			try {
				is = am.open("Programs/All/" + fileName);
				os = new FileOutputStream(Environment.getExternalStorageDirectory().toString() + "/C Programs/" + fileName);
				copyFiles(is, os);
				is.close();
				is = null;
				os.flush();
				os.close();
				os = null;
			} catch (IOException e) {
				e.printStackTrace();
			}
		}
		inflater = getLayoutInflater();
		layout = inflater.inflate(R.layout.toast, (ViewGroup) findViewById(R.id.llToast));
		tv = (TextView) layout.findViewById(R.id.tvToast);
		iv = (ImageView) layout.findViewById(R.id.ivToast);
		tv.setTextSize(20);
		tv.setText("All files saved in C Programs folder!");
		Toast myToast = new Toast(getApplicationContext());
		myToast.setDuration(Toast.LENGTH_LONG);
		myToast.setView(layout);
		myToast.show();
	}

	private void copyFiles(InputStream is, OutputStream os) throws IOException {
		// Create buffer to write programs in the SD card.
		byte[] buffer = new byte[1024];
		int read;
		while((read = is.read(buffer)) != -1){
			os.write(buffer, 0, read);
		}
	}

	@Override
	public void onClick(View v) {
		copyAssets();
	}
}
