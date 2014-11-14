package net.csarchive.cprogramming;

import android.app.Activity;
import android.os.Bundle;
import android.webkit.WebSettings;
import android.webkit.WebSettings.RenderPriority;
import android.webkit.WebView;

public class About extends Activity{
	
	WebView wv;

	@SuppressWarnings("deprecation")
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.about);
		String text = "<html><body style=\"text-align:justify;background:#198CFF;color:#ffffff;\"> %s </body></Html>";
		String data = getString(R.string.tvCreate);
		wv = (WebView) findViewById(R.id.wvInfo);
		WebSettings websettings = wv.getSettings();
		websettings.setDefaultFontSize(18);
		websettings.setRenderPriority(RenderPriority.HIGH);
		websettings.setCacheMode(WebSettings.LOAD_NO_CACHE);
		websettings.setAppCacheEnabled(false);
		websettings.setBlockNetworkImage(true);
		websettings.setLoadsImagesAutomatically(true);
		websettings.setGeolocationEnabled(false);
		websettings.setNeedInitialFocus(false);
		websettings.setSaveFormData(false);
		wv.loadData(String.format(text, data), "text/html", "utf-8");
	} 
}
