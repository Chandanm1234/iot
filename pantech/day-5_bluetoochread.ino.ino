#include <FastIO.h>
#include <I2CIO.h>
#include <LCD.h>
#include <LiquidCrystal.h>
#include <LiquidCrystal_I2C.h>
#include <LiquidCrystal_SR.h>
#include <LiquidCrystal_SR2W.h>
#include <LiquidCrystal_SR3W.h>

int led = 2;
int fan = 3;
void setup() 
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(fan,OUTPUT);
}

void loop() 
{
  while(!Serial.available());
  byte value = Serial.read();
  switch(value)
  {
    case 'O':
      digitalWrite(led,HIGH);
      break;
    case 'F':
      digitalWrite(led,LOW);
      break;
    case 'A':
      digitalWrite(fan,HIGH);
      break;
    case 'B':
      digitalWrite(fan,LOW);
      break;      
  }
}
