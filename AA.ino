#include <DFPlayer_Mini_Mp3.h>


#include <SoftwareSerial.h>
const int LED =8; 
const int KNOCK = 2;
SoftwareSerial mySerial(12, 13);

void setup() {
  pinMode(LED, OUTPUT);
Serial.begin (9600);
mySerial.begin (9600);
mp3_set_serial (mySerial);
delay(1);
mp3_set_volume (10000009);
digitalWrite(0,HIGH);

}
void loop() {
int v = analogRead(KNOCK);
  if (v>100)
  { digitalWrite(LED, HIGH);
    mp3_play(1);
    
     Serial.println("MUSick on");
     
  }
}
