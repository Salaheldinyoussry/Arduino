
#include "Wire.h"
#include <MPU6050_light.h>

MPU6050 mpu(Wire);
int led_pin=13;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  pinMode(led_pin,OUTPUT);
  
  byte status = mpu.begin();
  while(status!=0){ } 
  delay(1000);
  mpu.calcOffsets(); 
}


void loop() {
  mpu.update();
  if(mpu.getAngleY() >60 || mpu.getAngleX()>60 ){
digitalWrite(ledPin, !digitalRead(ledPin));
delay(500);


  }
  }
