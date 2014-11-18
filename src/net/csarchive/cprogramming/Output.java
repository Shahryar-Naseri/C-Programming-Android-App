package net.csarchive.cprogramming;

import java.io.IOException;
import java.io.InputStream;
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
	
	TextView tvOutput;
	Button btnClose;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.output);
		tvOutput = (TextView) findViewById(R.id.tvOutputDisplay);
		tvOutput.setMovementMethod(new ScrollingMovementMethod());
		btnClose = (Button) findViewById(R.id.btnClose);
		openOutput();
		tvOutput.setTextSize(TypedValue.COMPLEX_UNIT_SP, getResources().getDimension(R.dimen.textsize3));
		btnClose.setOnClickListener(this);
	}

	private void openOutput() {
		Bundle extras = getIntent().getExtras();
		String temp = extras.getString("KEY");
		final AssetManager am = getAssets();
		try {
			InputStream is = am.open(temp + " output.txt");
			int size = is.available();
			byte[] buffer = new byte[size];
			is.read(buffer);
			is.close();
			String text = new  String(buffer);
			tvOutput.setText(text);
			tvOutput.setTextColor(Color.parseColor("#198CFF"));
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	@Override
	public void onClick(View v) {
		onBackPressed();
	}

}
