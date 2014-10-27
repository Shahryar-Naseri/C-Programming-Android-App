package net.csarchive.cprogramming;

import java.io.IOException;
import java.util.ArrayList;

import android.app.ListActivity;
import android.content.Intent;
import android.content.res.AssetManager;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.ListView;

public class Switch extends ListActivity{
	
	String[] items;
	ListView l;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.list);
		getFileList();
		l = getListView();
		ArrayAdapter<String> adapter = new ArrayAdapter<String>(Switch.this, android.R.layout.simple_list_item_1, items);
		l.setAdapter(adapter);
	}

	private void getFileList() {
		// Create an ArrayList to store all files' name inside assets\All folder.
		ArrayList<String> filesArrayList = new ArrayList<String>();
		final AssetManager assetManager = getAssets();
		String[] filelist;
		try {
			filelist = assetManager.list("Switch");
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
		Intent i = new Intent(Switch.this, SwitchPrograms.class);
		i.putExtra("KEY", p);
		startActivity(i);
	}

}

