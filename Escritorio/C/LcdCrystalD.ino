/*
	LCD CRYSTAL DISPLAY CODE
	BASE TO ADD IT TO ANY CODE

	10/27/14
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);

void lcdPrint()
{
  lcd.clear(); 			
  lcd.setCursor(0,0);	//first set the cursor in a position between 20,4
  lcd.print("Hello World");//print something
  						//if you want to print other things use the 
  						//last 2 lines in a diferent position

}

void setup() 
{
  lcd.init();
  lcd.backlight();  
}

void loop() 
{
  lcdPrint();  
}
