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
import android.view.View;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.EditText;
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
		llSearch.setVisibility(View.GONE);
		llResults.setVisibility(View.VISIBLE);
		l.setVisibility(View.VISIBLE);
		int num = adapter.getCount();
		final Toast toast = Toast.makeText(getBaseContext(), "No Result Found!\nPlese try again...", Toast.LENGTH_LONG);
		toast.setGravity(Gravity.CENTER|Gravity.CENTER_HORIZONTAL, 0, 0);
		LinearLayout toastLayout = (LinearLayout) toast.getView();
	    TextView toastTV = (TextView) toastLayout.getChildAt(0);
	    toastTV.setTextSize(20);
	    String temp = etSearchMain.getText().toString();
	    if(num == 0 || temp == null || temp.equals("")){
	    	toast.show();
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
