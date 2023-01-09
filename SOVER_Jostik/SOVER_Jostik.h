#pragma once
#include <Arduino.h>
class Jostik{
	public:
	Jostik(byte Xpin_, byte Ypin_, byte Knop_);
	void startJostik();
	void josTik();
	long getVse();
	byte getX();
	byte getY();
	byte getKn();
    long getVsePort();
	byte Xpin;
	byte Ypin;
	byte Knop;
	byte sysPort;
	int xx;
	int yy;
	byte kk;
	byte Xpin_, Ypin_, Knop_;
};