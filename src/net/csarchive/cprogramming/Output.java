package net.csarchive.cprogramming;

import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;

import android.app.Activity;
import android.content.res.AssetManager;
import android.graphics.Color;
import android.os.Bundle;
import android.text.method.ScrollingMovementMethod;
import android.util.TypedValue;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class Output extends Activity implements View.OnClickListener{
	
	TextView tv;
	Button btnClose;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		// TODO Auto-generated method stub
		super.onCreate(savedInstanceState);
		setContentView(R.layout.output);
		tv = (TextView) findViewById(R.id.tvDisplay);
		tv.setMovementMethod(new ScrollingMovementMethod());
		btnClose = (Button) findViewById(R.id.btnClose);
		openOutput();
		tv.setTextSize(TypedValue.COMPLEX_UNIT_SP, getResources().getDimension(R.dimen.textsize3));
		btnClose.setOnClickListener(this);
	}

	private void openOutput() {
		// TODO Auto-generated method stub
		Bundle extras = getIntent().getExtras();
		int temp = extras.getInt("KEY");
		String fileName = extras.getString("NAME");
		final AssetManager am = getAssets();
		ArrayList<String> filesArrayList = new ArrayList<String>();
		String[] filelist;
		try {
			filelist = am.list(fileName);
			for(String name: filelist){
				filesArrayList.add(name);
			}
			
		} catch (IOException e) {
			e.printStackTrace();
		}
		String[] items = new String[filesArrayList.size()];
		filesArrayList.toArray(items);
		
		try {
			InputStream is = am.open(fileName + "/" + items[temp]);
			int size = is.available();
			byte[] buffer = new byte[size];
			is.read(buffer);
			is.close();
			String text = new  String(buffer);
			tv.setText(text);
			tv.setTextColor(Color.parseColor("#198CFF"));
			tv.setBackgroundColor(Color.BLACK);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	@Override
	public void onClick(View v) {
		// TODO Auto-generated method stub
		onBackPressed();
	}

}
