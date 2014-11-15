package net.csarchive.cprogramming;

import java.io.IOException;
import java.util.ArrayList;

import android.app.ListActivity;
import android.content.Intent;
import android.content.res.AssetManager;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.Gravity;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

public class Search extends ListActivity implements View.OnClickListener, TextWatcher{
	
	EditText etSearchMain, etSearch;
	ListView l;
	ArrayAdapter<String> adapter;
	ArrayList<String> filesArrayList;
	Button btnSearch;
	LinearLayout llSearch, llResults;
	TextWatcher tw1, tw2;
	LayoutInflater inflater;
	View layout;
	TextView tv;
	ImageView iv;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.search);
		this.getWindow().setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_STATE_ALWAYS_HIDDEN);
		btnSearch = (Button) findViewById(R.id.btnSearch);
		etSearchMain = (EditText) findViewById(R.id.etSearchMain);
		etSearch = (EditText) findViewById(R.id.etSearch);
		llSearch = (LinearLayout) findViewById(R.id.llSearch);
		llResults = (LinearLayout) findViewById(R.id.llResults);
		getFileList();
		l = getListView();
		adapter = new ArrayAdapter<String>(Search.this, android.R.layout.simple_list_item_1, filesArrayList);
		l.setAdapter(adapter);
		etSearchMain.addTextChangedListener(this);
		btnSearch.setOnClickListener(this);
		etSearch.addTextChangedListener(this);
	}

	private void getFileList() {
		filesArrayList = new ArrayList<String>();
		final AssetManager assetManager = getAssets();
		String[] filelist;
		try {
			filelist = assetManager.list("All");
			for(String name: filelist){
				name = name.substring(0, name.length() - 2);
				filesArrayList.add(name);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	@Override
	public void beforeTextChanged(CharSequence s, int start, int count,
			int after) {}

	@Override
	public void onTextChanged(CharSequence s, int start, int before, int count) {
		adapter.getFilter().filter(s.toString().trim());
	}

	@Override
	public void afterTextChanged(Editable s) {}

	@Override
	public void onClick(View v) {
		String temp = etSearchMain.getText().toString();
		inflater = getLayoutInflater();
		layout = inflater.inflate(R.layout.toast, (ViewGroup) findViewById(R.id.llToast));
		tv = (TextView) layout.findViewById(R.id.tvToast);
		iv = (ImageView) layout.findViewById(R.id.ivToast);
		tv.setTextSize(20);
		Toast myToast = new Toast(getApplicationContext());
		myToast.setDuration(Toast.LENGTH_LONG);
		myToast.setView(layout);
		if(temp == null || temp.equals("")){
			tv.setText("Please Enter A Query To See The Result!");
			myToast.show();
		}
		else{
			llSearch.setVisibility(View.GONE);
			llResults.setVisibility(View.VISIBLE);
			l.setVisibility(View.VISIBLE);
			int num = adapter.getCount();
			if(num == 0){
				myToast.setGravity(Gravity.CENTER|Gravity.CENTER_HORIZONTAL, 0, 0);
				tv.setText("No Result Found! Please Try Again.");
				myToast.show();
			}
		}   
	}
	
	@Override
	protected void onListItemClick(ListView l, View v, int position, long id) {
		super.onListItemClick(l, v, position, id);
		String str = adapter.getItem(position);
		Intent i = new Intent(Search.this, AllPrograms.class);
		i.putExtra("KEY", str);
		startActivity(i);
	}
}
