package net.csarchive.cprogramming;

import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;

import android.annotation.SuppressLint;
import android.app.Activity;
import android.app.AlertDialog;
import android.content.ClipData;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.AssetManager;
import android.graphics.Color;
import android.os.Bundle;
import android.text.method.ScrollingMovementMethod;
import android.util.TypedValue;
import android.view.View;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.TextView;
import android.widget.Toast;


public class PointerPrograms extends Activity implements View.OnClickListener{
	
	TextView tv;
	Button btnIncrease, btnDecrease, btnCopy, btnFontColor;
	ImageButton btnShare;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.display);
		tv = (TextView) findViewById(R.id.tvDisplay);
		tv.setMovementMethod(new ScrollingMovementMethod());
		openFile();
		tv.setTextSize(TypedValue.COMPLEX_UNIT_SP, getResources().getDimension(R.dimen.textsize3));
		btnIncrease = (Button) findViewById(R.id.btnIncrease);
		btnDecrease = (Button) findViewById(R.id.btnDecrease);
		btnShare = (ImageButton) findViewById(R.id.btnShare);
		btnCopy = (Button) findViewById(R.id.btnCopy);
		btnFontColor = (Button) findViewById(R.id.btnFontColor);
		btnIncrease.setOnClickListener(this);
		btnDecrease.setOnClickListener(this);
		btnShare.setOnClickListener(this);
		btnCopy.setOnClickListener(this);
		btnFontColor.setOnClickListener(this);
	}

	private void openFile() {
		// Using AssetManager and InputStream to open file selected by the user.
		Bundle extras = getIntent().getExtras();
		int temp = extras.getInt("KEY");
		final AssetManager am = getAssets();
		ArrayList<String> filesArrayList = new ArrayList<String>();
		String[] filelist;
		try {
			filelist = am.list("Pointer");
			for(String name: filelist){
				filesArrayList.add(name);
			}
			
		} catch (IOException e) {
			e.printStackTrace();
		}
		String[] items = new String[filesArrayList.size()];
		filesArrayList.toArray(items);
		
		try {
			InputStream is = am.open("Pointer/" + items[temp]);
			int size = is.available();
			byte[] buffer = new byte[size];
			is.read(buffer);
			is.close();
			String text = new  String(buffer);
			tv.setText(text);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	private void fontColor() {
		// Create a dialog to allow user changes the font color.
		final CharSequence[] colors = {"Blue", "Red", "Green", "Default"};
		final int defaultColor = tv.getCurrentTextColor();
		AlertDialog.Builder builder = new AlertDialog.Builder(this);
		builder.setTitle("Please select a color");
		builder.setIcon(R.drawable.c);
		builder.setPositiveButton("OK", null);
		builder.setNegativeButton("Cancel", new DialogInterface.OnClickListener() {
			
			@Override
			public void onClick(DialogInterface dialog, int which) {
				tv.setTextColor(defaultColor);
			}
		});
		builder.setSingleChoiceItems(colors, -1, new DialogInterface.OnClickListener() {
			
			@Override
			public void onClick(DialogInterface dialog, int which) {
				if(colors[which].equals("Blue")){
					tv.setTextColor(Color.BLUE);
				}
				else if(colors[which].equals("Red")){
					tv.setTextColor(Color.RED);
				}
				else if(colors[which].equals("Green")){
					tv.setTextColor(Color.GREEN);
				}
				else{
					tv.setTextColor(Color.BLACK);
				}
			}
		});
		AlertDialog alert = builder.create();
		alert.show();
	}

	@SuppressWarnings("deprecation")
	@SuppressLint("NewApi")
	@Override
	public void onClick(View v) {
		if(v.getId() == R.id.btnIncrease){
			tv.setTextSize(TypedValue.COMPLEX_UNIT_SP, tv.getTextSize() + 2);
		}
		else if(v.getId() == R.id.btnDecrease){
			tv.setTextSize(TypedValue.COMPLEX_UNIT_SP, tv.getTextSize() - 2);
		}
		else if(v.getId() == R.id.btnShare){
			Intent sharingIntent = new Intent(android.content.Intent.ACTION_SEND);
			sharingIntent.setType("text/plain");
			String shareBody = tv.getText().toString();
			sharingIntent.putExtra(android.content.Intent.EXTRA_SUBJECT, "C Program");
			sharingIntent.putExtra(android.content.Intent.EXTRA_TEXT, shareBody);
			startActivity(Intent.createChooser(sharingIntent, "Share via"));
		}
		else if(v.getId() == R.id.btnCopy){
			String copy = tv.getText().toString();
			if(android.os.Build.VERSION.SDK_INT < android.os.Build.VERSION_CODES.HONEYCOMB){
				android.text.ClipboardManager clipboardMgr = (android.text.ClipboardManager) getSystemService(Context.CLIPBOARD_SERVICE);
				clipboardMgr.setText(copy);
				Toast.makeText(getBaseContext(), "Copied to the clipboard", Toast.LENGTH_LONG).show();
			}
			else{
				android.content.ClipboardManager clipboardMgr = (android.content.ClipboardManager) getSystemService(Context.CLIPBOARD_SERVICE);
				ClipData clip = ClipData.newPlainText("Copied text", copy);
				clipboardMgr.setPrimaryClip(clip);
				Toast.makeText(getBaseContext(), "Copied to the clipboard", Toast.LENGTH_LONG).show();
			}
			
		}
		else{
			fontColor();
		}
	}
}
