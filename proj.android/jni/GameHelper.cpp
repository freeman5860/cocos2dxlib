#include "GameHelper.h"
#include <jni.h>
#include "platform/android/jni/JniHelper.h"

using namespace cocos2d;

void GameHelper::openURL(const char * url){
	JniMethodInfo minfo;
	bool isHave = JniHelper::getStaticMethodInfo(minfo,
		"com/freeman/cocos2dx/GameHelper","openURL","(Ljava/lang/String;)V");
	if(!isHave){
		//CCLog("jni:openURL 函数不存在");
	}else{
		jstring jurl = minfo.env->NewStringUTF(url);
		minfo.env->CallStaticVoidMethod(minfo.classID,minfo.methodID,jurl);
	}
}
