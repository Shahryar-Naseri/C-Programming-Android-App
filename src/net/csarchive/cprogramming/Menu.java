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
	String TAG;
	
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.menu);
		btnMainMenu = (Button) findViewById(R.id.btnMainMenu);
		btnSaveAll = (Button) findViewById(R.id.btnSaveAll);
		btnMainMenu.setOnClickListener(this);
		btnSaveAll.setOnClickListener(this);
		l = getListView();
		l.setAdapter(new ArrayAdapter<String>(Menu.this, R.layout.simple_expandable_list_item_1, chapters));
	}

	@Override
	protected void onListItemClick(ListView l, View v, int position, long id) {
		// TODO Auto-generated method stub
		super.onListItemClick(l, v, position, id);
		int p = position;
		Intent i;
		switch(p){
		case 0:
			i = new Intent(Menu.this, All.class);
			startActivity(i);
			break;
		case 1:
			i = new Intent(Menu.this, Area.class);
			startActivity(i);
			break;
		case 2:
			i = new Intent(Menu.this, Array.class);
			startActivity(i);
			break;
		case 3:
			i = new Intent(Menu.this, Conditional.class);
			startActivity(i);
			break;
		case 4:
			i = new Intent(Menu.this, Function.class);
			startActivity(i);
			break;
		case 5:
			i = new Intent(Menu.this, IfElse.class);
			startActivity(i);
			break;
		case 6:
			i = new Intent(Menu.this, LibraryFns.class);
			startActivity(i);
			break;
		case 7:
			i = new Intent(Menu.this, LinkedList.class);
			startActivity(i);
			break;
		case 8:
			i = new Intent(Menu.this, Loop.class);
			startActivity(i);
			break;
		case 9:
			i = new Intent(Menu.this, Others.class);
			startActivity(i);
			break;
		case 10:
			i = new Intent(Menu.this, Pointer.class);
			startActivity(i);
			break;
		case 11:
			i = new Intent(Menu.this, Recursion.class);
			startActivity(i);
			break;
		case 12:
			i = new Intent(Menu.this, Simple.class);
			startActivity(i);
			break;
		case 13:
			i = new Intent(Menu.this, PString.class);
			startActivity(i);
			break;
		case 14:
			i = new Intent(Menu.this, Structure.class);
			startActivity(i);
			break;
		case 15:
			i = new Intent(Menu.this, Switch.class);
			startActivity(i);
			break;
		}
	}

	@Override
	public void onClick(View v) {
		// TODO Auto-generated method stub
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
