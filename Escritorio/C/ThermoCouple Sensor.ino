/*
	THERMOCOUPLE SENSOR CODE
 	BASE TO ADD IT TO ANY CODE
 
 	10/27/14
 */

#include "Adafruit_MAX31855.h"

// define temp sensor pins    
int thermoDO = 6;    //miso
int thermoCS = 5;    //ss
int thermoCLK = 7;   //sck

static double T0 = 0;
static double previousT0;


Adafruit_MAX31855 thermocouple(thermoCLK, thermoCS, thermoDO);

void GetT0()
{
  T0 = thermocouple.GetLinTemp(thermocouple.readCelsius(),previousT0);
  if (isnan(T0)) {
    T0=previousT0;
    //Serial.println("Something wrong with thermocouple! T0");
  } 
  else previousT0=T0;
}

void setup() 
{

}

void loop() 
{
  GetT0();
  //Serial.println(T0); //you can print the temperature or use it
}
