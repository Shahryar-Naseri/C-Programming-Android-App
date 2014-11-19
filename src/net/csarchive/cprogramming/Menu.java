package net.csarchive.cprogramming;

import android.app.ListActivity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListView;

public class Menu extends ListActivity implements View.OnClickListener{
	
	String[] chapters = {"All", "Area", "Array", "Conditional Operators", "Function", "If Else", "Library Functions", "Linked List", "Loop", "Others", "Pointer",  
			"Recursion", "Simple", "String", "Structure", "Switch"};
	ListView l;
	Button btnMainMenu, btnSaveAll;
	ArrayAdapter<String> adapter;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.menu);
		btnMainMenu = (Button) findViewById(R.id.btnMainMenu);
		btnSaveAll = (Button) findViewById(R.id.btnSaveAll);
		btnMainMenu.setOnClickListener(this);
		btnSaveAll.setOnClickListener(this);
		l = getListView();
		adapter = new ArrayAdapter<String>(Menu.this, R.layout.simple_expandable_list_item_1, chapters);
		l.setAdapter(adapter);
	}

	@Override
	protected void onListItemClick(ListView l, View v, int position, long id) {
		super.onListItemClick(l, v, position, id);
		String str = adapter.getItem(position);
		Intent i = new Intent(Menu.this, ProgramsList.class);
		i.putExtra("KEY", str);
		startActivity(i);
	}

	@Override
	public void onClick(View v) {
		if(v.getId() == R.id.btnMainMenu){
			Intent i = new Intent("net.csarchive.cprogramming.MainMenu");
			startActivity(i);
		}
		else{
			Intent i = new Intent("net.csarchive.cprogramming.Save");
			startActivity(i);
		}
	}
}
