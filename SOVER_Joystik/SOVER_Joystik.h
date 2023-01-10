#pragma once
#include <Arduino.h>
class Joystik{
	public:
	Joystik(byte Xpin_, byte Ypin_, byte Knop_);
	void startJoystik();
	void joysTik();
	long getVse();
	byte getX();
	byte getY();
	byte getKn();
    long getVsePort();
	byte Xpin;
	byte Ypin;
	byte Knop;
	int xx;
	int yy;
	byte kk;
	byte Xpin_, Ypin_, Knop_;
};