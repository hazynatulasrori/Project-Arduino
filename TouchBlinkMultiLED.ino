#include <CapacitiveSensor.h>

/*
 * CapitiveSense Library Demo Sketch
 * Paul Badger 2008
 * Taylor Hokanson 2015
 * Uses a high value resistor e.g. 10M between send pin and receive pin
 * Resistor effects sensitivity, experiment with values, 50K - 50M. Larger resistor values yield larger sensor values.
 * Receive pin is the sensor pin - try different amounts of foil/metal on this pin
 */

CapacitiveSensor   sensor1 = CapacitiveSensor(12,11);        // 1M resistor between pins 12 and 11 (11 is sensor pin), add a wire and or foil if desired
int sensorTrip = 100;   
CapacitiveSensor   sensor2 = CapacitiveSensor(12,10);        // 1M resistor between pins 12 and 10 (10 is sensor pin), add a wire and or foil if desired
int sensorTrip2 = 100;  // Change sensor sensitivity here
CapacitiveSensor   sensor3 = CapacitiveSensor(12,9);        // 1M resistor between pins 12 and 9 (9 is sensor pin), add a wire and or foil if desired
int sensorTrip3 = 100;
CapacitiveSensor   sensor4 = CapacitiveSensor(12,8);        // 1M resistor between pins 12 and 8 (8 is sensor pin), add a wire and or foil if desired
int sensorTrip4 = 100;   
CapacitiveSensor   sensor5 = CapacitiveSensor(12,7);        // 1M resistor between pins 12 and 7 (7 is sensor pin), add a wire and or foil if desired
int sensorTrip5 = 100;  // Change sensor sensitivity here
CapacitiveSensor   sensor6 = CapacitiveSensor(12,6);        // 1M resistor between pins 12 and 6 (6 is sensor pin), add a wire and or foil if desired
int sensorTrip6 = 100;
CapacitiveSensor   sensor7 = CapacitiveSensor(12,5);        // 1M resistor between pins 12 and 5 (5 is sensor pin), add a wire and or foil if desired
int sensorTrip7 = 100;   
CapacitiveSensor   sensor8 = CapacitiveSensor(12,4);        // 1M resistor between pins 12 and 4 (4 is sensor pin), add a wire and or foil if desired
int sensorTrip8 = 100;  // Change sensor sensitivity here
CapacitiveSensor   sensor9 = CapacitiveSensor(12,3);        // 1M resistor between pins 12 and 3 (3 is sensor pin), add a wire and or foil if desired
int sensorTrip9 = 100;
 



void setup(){
   Serial.begin(9600);
}

void loop(){

  long lastReading;

  if (lastReading < millis() + 10){        // limits frequency of sensor value checking
    long start = millis();
    long total1 =  sensor1.capacitiveSensor(30);
    long total2 =  sensor2.capacitiveSensor(30);
    long total3 =  sensor3.capacitiveSensor(30);
    long total4 =  sensor4.capacitiveSensor(30);
    long total5 =  sensor5.capacitiveSensor(30);
    long total6 =  sensor6.capacitiveSensor(30);
    long total7 =  sensor7.capacitiveSensor(30);
    long total8 =  sensor8.capacitiveSensor(30);
    long total9 =  sensor9.capacitiveSensor(30);

  
   
  
    

    Serial.print(millis() - start);        // check on performance in milliseconds
    Serial.print("\t");                    // tab character for debug windown spacing

    Serial.print(total1);                  // print sensor output
    Serial.print("\t");
   
    
    if (total1 > sensorTrip){               
        tone(13, 1250, 10);                  // drive a piezo element at pin A, frequency B, and for C microseconds  
    }
    if (total2 > sensorTrip2){               
        tone(13, 1100, 10);                  // drive a piezo element at pin A, frequency B, and for C microseconds  
    }
    if (total3 > sensorTrip3){               
        tone(13, 950, 10);                  // drive a piezo element at pin A, frequency B, and for C microseconds  
    }
    if (total4 > sensorTrip4){               
        tone(13, 800, 10);                  // drive a piezo element at pin A, frequency B, and for C microseconds  
    }
    if (total5 > sensorTrip5){               
        tone(13, 750, 10);                  // drive a piezo element at pin A, frequency B, and for C microseconds  
    }
    if (total6 > sensorTrip6){               
        tone(13, 600, 10);                  // drive a piezo element at pin A, frequency B, and for C microseconds  
    }
     if (total7 > sensorTrip7){               
        tone(13, 450, 10);                  // drive a piezo element at pin A, frequency B, and for C microseconds  
    }
    if (total8 > sensorTrip8){               
        tone(13, 300, 10);                  // drive a piezo element at pin A, frequency B, and for C microseconds  
    }
    if (total9 > sensorTrip9){               
        tone(13, 150, 10);                  // drive a piezo element at pin A, frequency B, and for C microseconds  
    }
  
    
    lastReading = millis();
  }
}
