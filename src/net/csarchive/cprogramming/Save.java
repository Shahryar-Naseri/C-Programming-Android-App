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
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class Save extends Activity implements View.OnClickListener{
	
	Button btnSaveAll;

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
			files = am.list("All Programs");
		} catch (IOException e) {
			e.printStackTrace();
		}
		for(String fileName: files){
			InputStream is = null;
			OutputStream os = null;
			try {
				is = am.open("All Programs/" + fileName);
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
		Toast.makeText(getBaseContext(), "All files saved in C Programs folder!", Toast.LENGTH_LONG).show();
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
