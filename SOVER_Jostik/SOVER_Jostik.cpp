#include <SOVER_Jostik.h>
Jostik::Jostik(byte Xpin_, byte Ypin_, byte Knop_){
	Xpin = Xpin_;
	Ypin = Ypin_;
	Knop = Knop_;
}
void Jostik::startJostik(){
	pinMode(Knop, INPUT_PULLUP);
	Serial.begin(9600);
}
void Jostik::josTik(){
	xx = analogRead(Xpin);
	yy = analogRead(Ypin);
	kk = !digitalRead(Knop);
}
long Jostik::getVsePort(){
	  Serial.print(xx);
	  Serial.print(",");
	  Serial.print(yy);
	  Serial.print(",");
	  Serial.print(kk);
	  Serial.println();
}
long Jostik::getVse(){
	return xx, yy, kk;
}
byte Jostik::getX(){
	return xx;
}
byte Jostik::getY(){
	return yy;
}
byte Jostik::getKn(){
	return kk;
}

