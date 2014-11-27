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
import android.view.WindowManager;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.TextView;

public class ProgramsList extends ListActivity implements View.OnClickListener{
	
	String[] items;
	ListView l;
	EditText etSearch;
	Button btnProgramsList, btnMainMenu;
	ArrayAdapter<String> adapter;
	String temp;
	TextView tvListTitle;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.list);
		this.getWindow().setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_STATE_ALWAYS_HIDDEN);
		btnProgramsList = (Button) findViewById(R.id.btnProgramsList);
		btnMainMenu = (Button) findViewById(R.id.btnMainMenu);
		tvListTitle = (TextView) findViewById(R.id.tvListTitle);
		btnProgramsList.setOnClickListener(this);
		btnMainMenu.setOnClickListener(this);
		getFileList();
		tvListTitle.setText(temp + " Programs");
		l = getListView();
		adapter = new ArrayAdapter<String>(ProgramsList.this, R.layout.simple_list_item_1, items);
		l.setAdapter(adapter);
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

	private void getFileList() {
		// Create an ArrayList to store all files' name inside assets\All folder.
		Bundle extras = getIntent().getExtras();
		temp = extras.getString("KEY");
		ArrayList<String> filesArrayList = new ArrayList<String>();
		final AssetManager assetManager = getAssets();
		String[] filelist;
		try {
			filelist = assetManager.list("Programs/" + temp);
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
		String str = adapter.getItem(position);
		Intent i = new Intent(ProgramsList.this, ProgramsDisplay.class);
		i.putExtra("KEY", str);
		i.putExtra("LOC", temp);
		startActivity(i);
	}

	@Override
	public void onClick(View v) {
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

