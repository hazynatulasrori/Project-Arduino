#include <DFPlayer_Mini_Mp3.h>
#include <SoftwareSerial.h>


SoftwareSerial mySerial(12, 13);

const int KNOCK = 0;
void setup() {

Serial.begin (9600);
mySerial.begin (9600);
mp3_set_serial (mySerial);
delay(10);
mp3_set_volume (25);
delay(10);
digitalWrite(KNOCK,HIGH);
}
void loop() {
   int value = analogRead(KNOCK);
     if (value>10){
    mp3_play("tidak boleh_denoised.wav");
    Serial.println("LED on");
    }
}
   
