package net.csarchive.cprogramming;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;


public class MainMenu extends Activity implements View.OnClickListener{
	

	Button btnProgramsList, btnViewAll, btnSaveAll, btnSearch, btnContact, btnAbout, btnExit;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main_menu);
        btnProgramsList = (Button) findViewById(R.id.btnProgramsList);
        btnContact = (Button) findViewById(R.id.btnContact);
        btnViewAll = (Button) findViewById(R.id.btnViewAll);
        btnSaveAll = (Button) findViewById(R.id.btnSaveAll);
        btnSearch = (Button) findViewById(R.id.btnSearch);
        btnAbout = (Button) findViewById(R.id.btnAbout);
        btnExit = (Button) findViewById(R.id.btnExit);
        btnProgramsList.setOnClickListener(this);
        btnViewAll.setOnClickListener(this);
        btnContact.setOnClickListener(this);  
        btnSaveAll.setOnClickListener(this);
        btnSearch.setOnClickListener(this);
        btnAbout.setOnClickListener(this);
        btnExit.setOnClickListener(this);
    }

	@Override
	public void onClick(View v) {
		// Defining onClickListener to open each activity using Intent.
		if(v.getId() == R.id.btnProgramsList){
			Intent c = new Intent("net.csarchive.cprogramming.Menu");
			startActivity(c);
		}
		else if(v.getId() == R.id.btnViewAll){
			Intent i = new Intent("net.csarchive.cprogramming.All");
			startActivity(i);
		}
		else if(v.getId() == R.id.btnSaveAll){
			Intent i = new Intent("net.csarchive.cprogramming.Save");
			startActivity(i);
		}
		else if(v.getId() == R.id.btnSearch){
			Intent i = new Intent("net.csarchive.cprogramming.Search");
			startActivity(i);
		}
		else if(v.getId() == R.id.btnContact){
			Intent i = new Intent("net.csarchive.cprogramming.Contact");
			startActivity(i);
		}
		else if(v.getId() == R.id.btnAbout){
			Intent i = new Intent("net.csarchive.cprogramming.About");
			startActivity(i);
		}
		else{
			onBackPressed();
		}
	}
	
	// Create a dialog to confirm user
	public void onBackPressed(){
		new AlertDialog.Builder(this).setMessage("Are you want to exit?").setCancelable(false).setPositiveButton("Yes", new DialogInterface.OnClickListener() {
			
			@Override
			public void onClick(DialogInterface dialog, int which) {
				MainMenu.this.finish();
			}
		}).setNegativeButton("No", null).show();
	}
}
