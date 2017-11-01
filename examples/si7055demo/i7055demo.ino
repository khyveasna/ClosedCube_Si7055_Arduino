/**************************************************************************************

This is example for ClosedCube Si7055 ±0.5°C Digital Temperature Sensor breakout board

Initial Date: 20-Jun-2016

Hardware connections for Arduino Uno:
	VDD to 3.3V DC
	SCL to A5
	SDA to A4
	GND to common ground

Written by AA for ClosedCube

MIT License

**************************************************************************************/

#include <Wire.h>
#include "ClosedCube_Si7055.h"

ClosedCube_Si7055 si7055;

void setup()
{
	Serial.begin(9600);
	Serial.println("ClosedCube Si7055 Arduino Test");

	si7055.begin(0x40);	// default I2C address is 0x40
}

void loop()
{
	Serial.print("T=");
	Serial.print(si7055.readTemperature());
	Serial.println("C");
	delay(300);
}

