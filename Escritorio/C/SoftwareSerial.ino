/*
	SOFTWARE SERIAL CODE
	BASE TO ADD IT TO ANY CODE

	10/30/14
*/

#include <SoftwareSerial.h>

/*
static String serialString = "";
static String serialString1 = "";

boolean stringComplete = false;
boolean stringComplete1 = false;
*/

SoftwareSerial ASerial(2, 3);
//SoftwareSerial BSerial(52, 53);

void setup() 
{
	//serialString.reserve(200);
	//serialString1.reserve(200);

	Serial.begin(9600);
	ASerial.begin(9600);
}

void loop() 
{
  if (ASerial.available())
    Serial.write(ASerial.read());
  if (Serial.available())
    ASerial.write(Serial.read());}