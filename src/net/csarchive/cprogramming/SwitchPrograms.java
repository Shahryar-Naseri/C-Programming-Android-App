package net.csarchive.cprogramming;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import android.annotation.SuppressLint;
import android.app.Activity;
import android.content.ClipData;
import android.content.Context;
import android.content.Intent;
import android.content.res.AssetManager;
import android.graphics.Color;
import android.graphics.Typeface;
import android.os.Bundle;
import android.os.Environment;
import android.text.Spannable;
import android.text.SpannableString;
import android.text.Spanned;
import android.text.TextUtils;
import android.text.method.ScrollingMovementMethod;
import android.text.style.ForegroundColorSpan;
import android.util.TypedValue;
import android.view.Gravity;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.TextView;
import android.widget.Toast;

public class SwitchPrograms extends Activity implements View.OnClickListener{
	
	TextView tv, tvToast;
	Typeface face;
	Button btnIncrease, btnDecrease, btnCopy, btnSave, btnOutput;
	ImageButton btnShare;
	LayoutInflater inflater;
	View layout;
	ImageView iv;
	Spannable raw;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.display);
		tv = (TextView) findViewById(R.id.tvDisplay);
		face = Typeface.createFromAsset(getAssets(), "Fonts/Consolas.ttf");
		tv.setMovementMethod(new ScrollingMovementMethod());
		tv.setTextSize(TypedValue.COMPLEX_UNIT_SP, getResources().getDimension(R.dimen.textsize3));
		tv.setTypeface(face);
		openFile();
		syntaxHighlight();
		btnIncrease = (Button) findViewById(R.id.btnIncrease);
		btnDecrease = (Button) findViewById(R.id.btnDecrease);
		btnShare = (ImageButton) findViewById(R.id.btnShare);
		btnCopy = (Button) findViewById(R.id.btnCopy);
		btnSave = (Button) findViewById(R.id.btnSave);
		btnOutput = (Button) findViewById(R.id.btnOutput);
		btnIncrease.setOnClickListener(this);
		btnDecrease.setOnClickListener(this);
		btnShare.setOnClickListener(this);
		btnCopy.setOnClickListener(this);
		btnSave.setOnClickListener(this);
		btnOutput.setOnClickListener(this);
	}

	private void openFile() {
		// Using AssetManager and InputStream to open file selected by the user.
		Bundle extras = getIntent().getExtras();
		String temp = extras.getString("KEY");
		final AssetManager am = getAssets();
		try {
			InputStream is = am.open("Programs/Switch/" + temp + ".c");
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
	
    private void syntaxHighlight() {
		
		String [] green = {"#define", "#include<stdio.h>", "#include<conio.h>", "#include<stdlib.h>", "#include<math.h>", 
				"#include<graphics.h>", "#include<string.h>", "#include<malloc.h>", "#include<time.h>", "#include<ctype.h>"};
		for(String key: green){
			fontcolor(key, 0xFF458b00);
		}
		
		doColor();
		
		String[] purple = {"int", "float", "char", "signed", "long", "double", "NULL", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
		for(String key: purple){
			fontcolor(key, 0xFFc133a4);
		}
		
		String [] red = {"printf", "scanf", "if", "else", "for", "while", "switch", "case", "break", "default", "goto", "typedef", "struct", "return", "FILE", "exit", "fopen", "fprintf", "fscanf", "fclose", "(", ")"};
		for(String key: red){
			fontcolor(key, 0xFFDD2626);
		}
		
		String [] orange = {"main()", "getch()", "void"};
		for(String key: orange){
			fontcolor(key, 0xFFee7621);
		}
		
		printColor();
		commentColor();
	}
	
	private void fontcolor(String key, int color) {
		raw = new SpannableString(tv.getText());
	    int index = TextUtils.indexOf(raw, key);
	    while (index >= 0) 
	    {
	      raw.setSpan(new ForegroundColorSpan(color), index, index + key.length(), Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
	      index=TextUtils.indexOf(raw, key, index + key.length());
	    }
	    tv.setText(raw);
	}
	
	private void doColor() {
		raw = new SpannableString(tv.getText());
	    int index = TextUtils.indexOf(raw, "do");
	    while(index >= 0){
	    	raw.setSpan(new ForegroundColorSpan(Color.parseColor("#DD2626")), index, index + 2, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
	    	index=TextUtils.indexOf(raw, "do", index + 2);
	    }
	    tv.setText(raw);
	}
	
	private void printColor() {
		raw = new SpannableString(tv.getText());
		int index1 =TextUtils.indexOf(raw, '"');
		int index2 = TextUtils.indexOf(raw, '"', index1+1);
		while(index1 >= 0){
			raw.setSpan(new ForegroundColorSpan(Color.BLUE), index1, index2+1, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
			index1 = TextUtils.indexOf(raw, '"', index2+1);
			index2 = TextUtils.indexOf(raw, '"', index1+1);
		}
		tv.setText(raw);
	}

	private void commentColor() {
		raw = new SpannableString(tv.getText());
		int index=TextUtils.indexOf(raw, "*/");
		raw.setSpan(new ForegroundColorSpan(Color.parseColor("#198CFF")), 0, index+2, Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
		tv.setText(raw);
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
			}
			else{
				android.content.ClipboardManager clipboardMgr = (android.content.ClipboardManager) getSystemService(Context.CLIPBOARD_SERVICE);
				ClipData clip = ClipData.newPlainText("Copied text", copy);
				clipboardMgr.setPrimaryClip(clip);
			}
			inflater = getLayoutInflater();
			layout = inflater.inflate(R.layout.toast, (ViewGroup) findViewById(R.id.llToast));
			tvToast = (TextView) layout.findViewById(R.id.tvToast);
			iv = (ImageView) layout.findViewById(R.id.ivToast);
			tvToast.setTextSize(20);
			tvToast.setText("Program Copied To The Clipboard!");
			Toast myToast = new Toast(getApplicationContext());
			myToast.setGravity(Gravity.BOTTOM, 0, 100);
			myToast.setDuration(Toast.LENGTH_LONG);
			myToast.setView(layout);
			myToast.show();	
		}
		else if(v.getId() == R.id.btnOutput){
			programOutput();
		}
		else{
			saveProgram();
		}
	}
	
	private void programOutput() {
		Bundle extras = getIntent().getExtras();
		String temp = "Programs/Switch output/" + extras.getString("KEY");
		Intent i = new Intent(SwitchPrograms.this, Output.class);
		i.putExtra("KEY", temp);
		startActivity(i);
	}

	private void saveProgram() {
		Bundle extras = getIntent().getExtras();
		String temp = extras.getString("KEY");
		AssetManager am = getAssets();
		String newFolder = "/C Programs";
	    String extStorageDirectory = Environment.getExternalStorageDirectory().toString();
	    File myNewFolder = new File(extStorageDirectory + newFolder);
	    myNewFolder.mkdir();
	    InputStream is = null;
		OutputStream os = null;
		try {
				is = am.open("Programs/Switch/" + temp + ".c");
				os = new FileOutputStream(Environment.getExternalStorageDirectory().toString() + "/C Programs/" + temp + ".c");
				copyFiles(is, os);
				is.close();
				is = null;
				os.flush();
				os.close();
				os = null;
			} catch (IOException e) {
				e.printStackTrace();
			}
		inflater = getLayoutInflater();
		layout = inflater.inflate(R.layout.toast, (ViewGroup) findViewById(R.id.llToast));
		tvToast = (TextView) layout.findViewById(R.id.tvToast);
		iv = (ImageView) layout.findViewById(R.id.ivToast);
		tvToast.setTextSize(20);
		tvToast.setText("This file saved in C Programs folder!");
		Toast myToast = new Toast(getApplicationContext());
		myToast.setGravity(Gravity.BOTTOM, 0, 100);
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
}
