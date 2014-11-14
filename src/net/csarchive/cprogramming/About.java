package net.csarchive.cprogramming;

import android.app.Activity;
import android.os.Bundle;
import android.webkit.WebView;

public class About extends Activity{
	
	WebView wv;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.about);
		String text = "<html><body style=\"text-align:justify;background:#198CFF;color:#ffffff;\"> %s </body></Html>";
		String data = getString(R.string.tvCreate);
		wv = (WebView) findViewById(R.id.wvInfo);
		wv.loadData(String.format(text, data), "text/html", "utf-8");
	} 
}
