package net.csarchive.cprogramming;

import android.app.ListActivity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.ListView;

public class Menu extends ListActivity{
	
	String[] chapters = {"All", "Array", "Function", "Library Functions", "Linked List", "Loop", "Pointer",  
			"Recursion", "Structure", "Switch", "String"};
	ListView l;
	
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.list);
		l = getListView();
		l.setAdapter(new ArrayAdapter<String>(Menu.this, android.R.layout.simple_expandable_list_item_1, chapters));
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
			i = new Intent(Menu.this, Array.class);
			startActivity(i);
			break;
		case 2:
			i = new Intent(Menu.this, Function.class);
			startActivity(i);
			break;
		case 3:
			i = new Intent(Menu.this, LibraryFns.class);
			startActivity(i);
			break;
		case 4:
			i = new Intent(Menu.this, LinkedList.class);
			startActivity(i);
			break;
		case 5:
			i = new Intent(Menu.this, Loop.class);
			startActivity(i);
			break;
		case 6:
			i = new Intent(Menu.this, Pointer.class);
			startActivity(i);
			break;
		case 7:
			i = new Intent(Menu.this, Recursion.class);
			startActivity(i);
			break;
		case 8:
			i = new Intent(Menu.this, Structure.class);
			startActivity(i);
			break;
		case 9:
			i = new Intent(Menu.this, Switch.class);
			startActivity(i);
			break;
		case 10:
			i = new Intent(Menu.this, PString.class);
			startActivity(i);
			break;
		}
	}

}
