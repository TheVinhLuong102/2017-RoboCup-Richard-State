/*
Example sketch to demonstrate use of Movement.
This skecth demonstrates the use of dirveMotors.
--------------------------------------------------------

Created 24/8/2014 by Peter Drew. Last modified 14/8/2016 by Peter Drew.
*/

#include "RB_Movement.h"
#include "RB_Motor.h"
#include "Compass.h"
#include "Wire.h"
//compass HMC5883L(20,21,0x1E);

Movement bot(6,7,4,5,2,3); //this creates an instance of the object and sets motor pins

void setup() { //nothing is needed in setup
  
  Serial.begin(9600);
  Serial.print("start");
  pinMode(13,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
  /**
  Wire.begin();
  Serial.print("hmc");
  HMC5883L.init();
  Serial.print("done");
  **/
}

void loop() {
  Serial.print(digitalRead(12));
  
  //Serial.println(HMC5883L.getRealBearing());
  Serial.println(digitalRead(13));
}

