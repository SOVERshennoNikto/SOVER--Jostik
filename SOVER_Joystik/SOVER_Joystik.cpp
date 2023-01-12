#include <SOVER_Joystik.h>
Joystik::Joystik(byte Xpin_, byte Ypin_, byte Knop_){
	Xpin = Xpin_;
	Ypin = Ypin_;
	Knop = Knop_;
}
void Joystik::startJoystik(){
	pinMode(Knop, INPUT_PULLUP);
	Serial.begin(9600);
}
void Joystik::joysTik(){
	xx = analogRead(Xpin);
	yy = analogRead(Ypin);
	kk = !digitalRead(Knop);
}
byte Joystik::isLeft(){
	if (xx < 150 and 400 < yy <600){
		return true;
	}
	else {
		return false;
	}
}
byte Joystik::isRight(){
	if (xx > 900 and 400 < yy <600){
		return true;
	}
	else {
		return false;
	}
}
byte Joystik::isUp(){
	if (yy > 900 and 400 < xx <600){
		return true;
	}
	else {
		return false;
	}
}
byte Joystik::isDown(){
	if (yy < 150 and 400 < xx <600){
		return true;
	}
	else {
		return false;
	}
}
byte Joystik::isClick(){
	if (kk == 1){
		return true;
	}
	else {
		return false;
	}
}
long Joystik::getVsePort(){
	  Serial.print(xx);
	  Serial.print(",");
	  Serial.print(yy);
	  Serial.print(",");
	  Serial.print(kk);
	  Serial.println();
}
long Joystik::getVse(){
	return xx, yy, kk;
}
byte Joystik::getX(){
	return xx;
}
byte Joystik::getY(){
	return yy;
}
byte Joystik::getKn(){
	return kk;
}

