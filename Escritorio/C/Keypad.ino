/*
	KEYPAD CODE
 	BASE TO ADD IT TO ANY CODE
 
 	10/27/14
 */

#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns

char keys[ROWS][COLS] = { //keypad symbols you can change it if needed
  {
    1, 2, 3, 10
  }
  ,
  {
    4, 5, 6, 11
  }
  ,
  {
    7, 8, 9, 12
  }
  ,
  {
    '*', '.', '#', 13
  }
};
byte rowPins[ROWS] = {
  30, 32, 34, 36
}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {
  38, 40, 42, 44
}; //connect to the column pinouts of the keypad

static int key;
static int keynumber=0;

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void keypadi(int key){

  if (key == 10) //you can use this part to add different funtions to 
  {				//the other buttons only changing the key==symbol example
    //if
    //Do something
    //else
    //Do Contrary of something

  }
  else if (9>=key && key>=0){  //add pressed number to a int named keynumber concatening
    keynumber = concatenateNumb(keynumber,key);
  }
  else if (key == '.'){ //adds 0 to the int keynumber
    keynumber = concatenateNumb(keynumber,0);
  }
  else if (key=='#'){ //equivalent of enter for the keyboard
    //Do something with int number
    //reset keynumber
    keynumber=0;
  }
}


int concatenateNumb(int x, int y) {
  int pow = 10;
  pow*=x;
  return pow + y;        
}

void setup() 
{

}

void loop() 
{
  key = keypad.getKey();

  if (key != NO_KEY){
    keypadi(key);
  }
}

