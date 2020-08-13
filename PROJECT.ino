
#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>


void setup() {
SoftwareSerial mySerial(12, 13);
Serial.begin (9600);
mySerial.begin (9600);
mp3_set_serial (mySerial);
delay(10);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);

void loop() {
if(digitalRead(2)==LOW)
{

}
else if(digitalRead(3)==LOW)
{
  

}
else if(digitalRead(4)==LOW)
{

}
}
