/*
 * Common.cpp
 *
 *  Created on: 2014-2-11
 *      Author: apple
 */

#include "Common.h"
#include <stdlib.h>

using namespace freemanapp;

int Common::kWidth = 0;
int Common::kHeight = 0;

int Common::random(int s,int e){
    cc_timeval psv;
    CCTime::gettimeofdayCocos2d( &psv, NULL );    // 获取本地时间
    //根据时间产生随机种子
    unsigned int tsrans = psv.tv_sec * 1000 + psv.tv_usec / 1000;
    srand(tsrans);    //设定随机数种子
	float i = CCRANDOM_0_1()*(e-s+1)+s;
	return (int)i;
}

long Common::millisecondNow(){
	struct cc_timeval now;
	CCTime::gettimeofdayCocos2d(&now, NULL);
	return (now.tv_sec * 1000 + now.tv_usec / 1000);
}

void Common::setCameraWidth(int width){
	kWidth =width;
}

int Common::getCameraWith(){
	return kWidth;
}

void Common::setCameraHeight(int height){
	kHeight = height;
}

int Common::getCameraHeight(){
	return kHeight;
}