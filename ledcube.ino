void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);

}

void loop() {
for (int kat = 11; kat <= 13; kat++){
for(int kolon=2; kolon<=10; kolon++){
digitalWrite(kolon,HIGH);
digitalWrite(kat,HIGH);
delay(50);
digitalWrite(kolon,LOW);
digitalWrite(kat,LOW);
delay(50);
}
}
for (int kat = 11; kat <= 13; kat++){
digitalWrite(2,HIGH);
digitalWrite(kat,HIGH);
delay(100);
digitalWrite(2,LOW);
digitalWrite(kat,LOW);
delay(100);
digitalWrite(3,HIGH);
digitalWrite(kat,HIGH);
delay(100);
digitalWrite(3,LOW);
digitalWrite(kat,LOW);
delay(100);
digitalWrite(4,HIGH);
digitalWrite(kat,HIGH);
delay(100);
digitalWrite(4,LOW);
digitalWrite(kat,LOW);
delay(100);
digitalWrite(7,HIGH);
digitalWrite(kat,HIGH);
delay(100);
digitalWrite(7,LOW);
digitalWrite(kat,LOW);
delay(100);
digitalWrite(10,HIGH);
digitalWrite(kat,HIGH);
delay(100);
digitalWrite(10,LOW);
digitalWrite(kat,LOW);
delay(100);
digitalWrite(9,HIGH);
digitalWrite(kat,HIGH);
delay(100);
digitalWrite(9,LOW);
digitalWrite(kat,LOW);
delay(100);
digitalWrite(8,HIGH);
digitalWrite(kat,HIGH);
delay(100);
digitalWrite(8,LOW);
digitalWrite(kat,LOW);
delay(100);
digitalWrite(5,HIGH);
digitalWrite(kat,HIGH);
delay(100);
digitalWrite(5,LOW);
digitalWrite(kat,LOW);
delay(100);
}
}
