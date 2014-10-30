/*
	FLEXITIMER CODE
 	BASE TO ADD IT TO ANY CODE
 
 	10/27/14
 */

#include <FlexiTimer2.h>

void flash()                        
{   
  //ADD CODE YOU WANT TO RUN IN A SECOND PLANE  

}

void setup() 
{
  FlexiTimer2 ::set(1000, flash);
  FlexiTimer2 ::start();
}

void loop() 
{
  //ADD CODE YOU WANT TO RUN IN FIRST PLANE

}
