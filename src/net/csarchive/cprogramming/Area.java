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
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;

public class Area extends ListActivity implements View.OnClickListener{
	
	String[] items;
	ListView l;
	EditText etSearch;
	Button btnProgramsList, btnMainMenu;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.list);
		btnProgramsList = (Button) findViewById(R.id.btnProgramsList);
		btnMainMenu = (Button) findViewById(R.id.btnMainMenu);
		btnProgramsList.setOnClickListener(this);
		btnMainMenu.setOnClickListener(this);
		getFileList();
		l = getListView();
		final ArrayAdapter<String> adapter = new ArrayAdapter<String>(Area.this, android.R.layout.simple_list_item_1, items);
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
			filelist = assetManager.list("Area");
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

	@Override
	protected void onListItemClick(ListView l, View v, int position, long id) {
		// Send item position as an integer to AllPrograms activity.
		super.onListItemClick(l, v, position, id);
		int p = position;
		Intent i = new Intent(Area.this, AreaPrograms.class);
		i.putExtra("KEY", p);
		startActivity(i);
	}

	@Override
	public void onClick(View v) {
		// TODO Auto-generated method stub
		if(v.getId() == R.id.btnMainMenu){
			Intent i = new Intent("net.csarchive.cprogramming.MainMenu");
			startActivity(i);
		}
		else{
			Intent i = new Intent("net.csarchive.cprogramming.Menu");
			startActivity(i);
		}
	}
}
