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
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

public class SearchPrograms extends ListActivity{
	
	String[] items;
	ListView l;
	EditText etSearch;
	ArrayAdapter<String> adapter;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.searchresults);
		this.getWindow().setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_STATE_ALWAYS_HIDDEN);
		Bundle extras = getIntent().getExtras();
		String temp = extras.getString("KEY");
		getFileList();
		l = getListView();
		showResults(temp);
		textChanged();
	}

	private void getFileList() {
		// Create an ArrayList to store all files' name inside assets\All folder.
		ArrayList<String> filesArrayList = new ArrayList<String>();
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
		items = new String[filesArrayList.size()];
		filesArrayList.toArray(items);
	}
	
	private void showResults(String temp) {
        adapter = new ArrayAdapter<String>(SearchPrograms.this, android.R.layout.simple_list_item_1, items);
        if(temp == null || temp.equals("")){
			Toast toast = Toast.makeText(getBaseContext(), "No Result Found!\n\nPlese try again...", Toast.LENGTH_LONG);
			toast.setGravity(Gravity.CENTER|Gravity.CENTER_HORIZONTAL, 0, 0);
			LinearLayout toastLayout = (LinearLayout) toast.getView();
		    TextView toastTV = (TextView) toastLayout.getChildAt(0);
		    toastTV.setTextSize(20);
			toast.show();
		}
        adapter.getFilter().filter(temp);
        l.setAdapter(adapter);
	}
	
	private void textChanged() {
		etSearch = (EditText) findViewById(R.id.etSearch);
		etSearch.addTextChangedListener(new TextWatcher() {
			
			@Override
			public void onTextChanged(CharSequence s, int start, int before, int count) {
				adapter.getFilter().filter(s.toString().trim());
			}
			
			@Override
			public void beforeTextChanged(CharSequence s, int start, int count,
					int after) {}
			
			@Override
			public void afterTextChanged(Editable s) {}
		});
	}

	@Override
	protected void onListItemClick(ListView l, View v, int position, long id) {
		// Send item position as an integer to AllPrograms activity.
		super.onListItemClick(l, v, position, id);
		String str = adapter.getItem(position);
		Intent i = new Intent(SearchPrograms.this, AllPrograms.class);
		i.putExtra("KEY", str);
		startActivity(i);
	}
	
	public void onBackPressed(){
		Intent intent = new Intent("net.csarchive.cprogramming.MainMenu");
		startActivity(intent);
	}
}

