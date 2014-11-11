package net.csarchive.cprogramming;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class Search extends Activity implements View.OnClickListener{
	
	Button btnSearch;
	EditText etSearchMain;
	String str;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.search);
		btnSearch = (Button) findViewById(R.id.btnSearch);
		btnSearch.setOnClickListener(this);
		etSearchMain = (EditText) findViewById(R.id.etSearchMain);
		etSearchMain.addTextChangedListener(new TextWatcher() {
			
			@Override
			public void onTextChanged(CharSequence s, int start, int before, int count) {}
			
			@Override
			public void beforeTextChanged(CharSequence s, int start, int count,
					int after) {}
			
			@Override
			public void afterTextChanged(Editable s) {
				str = s.toString().trim();
			}
		});
	}

	@Override
	public void onClick(View v) {
		Intent i = new Intent(Search.this, SearchPrograms.class);
		i.putExtra("KEY", str);
		startActivity(i);
	}
}
