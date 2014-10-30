package net.csarchive.cprogramming;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.EditText;

public class Contact extends Activity implements View.OnClickListener{
	
	EditText etName, etSubject, etMessage;
	String name, subject, message, TAG;
	Button send;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.contact);
		this.getWindow().setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_STATE_ALWAYS_HIDDEN);
		intialize();
		send.setOnClickListener(this);		
	}

	private void intialize() {
		etName = (EditText) findViewById(R.id.etName);
		etSubject = (EditText) findViewById(R.id.etSubject);
		etMessage = (EditText) findViewById(R.id.etMessage);
		send = (Button) findViewById(R.id.btnSend);
	}
	
	@Override
	public void onClick(View v) {
		// Using Intent to send the user message by its device default email.
		converter();
		String emailAddress[] = { "info@csarchive.net" };
		String mail = "Name: "
				+ name
				+ '\n' + '\n'
				+ "Subject: "
				+ subject
				+ '\n' + '\n'
				+ "Message: "
				+ '\n' + '\n'
				+ message;
		Intent emailIntent = new Intent(android.content.Intent.ACTION_SEND);
		emailIntent.putExtra(android.content.Intent.EXTRA_EMAIL, emailAddress);
		emailIntent.putExtra(android.content.Intent.EXTRA_SUBJECT, subject);
		emailIntent.setType("plain/text");
		emailIntent.putExtra(android.content.Intent.EXTRA_TEXT, mail);
		startActivity(emailIntent);
	}
	
	private void converter() {
		// Converting the user inputs to the String.
		name = etName.getText().toString();
		subject = etSubject.getText().toString();
		message = etMessage.getText().toString();
	}

	private boolean isInFocus = false;

	@Override
	public void onWindowFocusChanged(boolean hasFocus) {
	    super.onWindowFocusChanged(hasFocus);
	    Log.d(TAG, "FOCUS = " + hasFocus);
	    isInFocus = hasFocus;
	}

	@Override
	public void onStop() {
	    super.onStop();
	    if (!isInFocus) finish();
	} 
}
