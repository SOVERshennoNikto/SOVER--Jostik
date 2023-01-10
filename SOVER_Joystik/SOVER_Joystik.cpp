#include <SOVER_Jostik.h>
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

