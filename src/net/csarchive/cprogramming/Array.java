package net.csarchive.cprogramming;

import java.io.IOException;
import java.util.ArrayList;

import android.app.ListActivity;
import android.content.Intent;
import android.content.res.AssetManager;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.EditText;
import android.widget.ListView;

public class Array extends ListActivity{
	
	String[] items;
	ListView l;
	EditText etSearch;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.list);
		getFileList();
		l = getListView();
		final ArrayAdapter<String> adapter = new ArrayAdapter<String>(Array.this, android.R.layout.simple_list_item_1, items);
		l.setAdapter(adapter);
		etSearch = (EditText) findViewById(R.id.etSearch);
		etSearch.addTextChangedListener(new TextWatcher() {
			
			@Override
			public void onTextChanged(CharSequence s, int start, int before, int count) {
				// TODO Auto-generated method stub
				adapter.getFilter().filter(s);
			}
			
			@Override
			public void beforeTextChanged(CharSequence s, int start, int count,
					int after) {
				
			}
			
			@Override
			public void afterTextChanged(Editable s) {
				
			}
		});
	}

	private void getFileList() {
		// Create an ArrayList to store all files' name inside assets\All folder.
		ArrayList<String> filesArrayList = new ArrayList<String>();
		final AssetManager assetManager = getAssets();
		String[] filelist;
		try {
			filelist = assetManager.list("All");
			for(String name: filelist){
				name = name.substring(0, name.length() - 4);
				filesArrayList.add(name);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
		items = new String[filesArrayList.size()];
		filesArrayList.toArray(items);
	}

	@Override
	protected void onListItemClick(ListView l, View v, int position, long id) {
		// Send item position as an integer to AllPrograms activity.
		super.onListItemClick(l, v, position, id);
		int p = position;
		Intent i = new Intent(Array.this, ArrayPrograms.class);
		i.putExtra("KEY", p);
		startActivity(i);
	}

}

