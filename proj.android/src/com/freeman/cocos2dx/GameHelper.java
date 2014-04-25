package com.freeman.cocos2dx;

import android.app.Activity;
import android.net.Uri;
import android.content.Intent;

public class GameHelper{
	private static Activity activity;

	public static void setActivity(Activity act){
		activity = act;
	}

	public static void openURL(String url){
		assert(activity != null);

		Intent i = new Intent(android.content.Intent.ACTION_VIEW);
		i.setData(Uri.parse(url));
		activity.startActivity(i);	
	}
}
