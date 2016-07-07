/*
  
  The CGShield uses a common cathode RGB LED to display a spectrum of colors.
  The CGShield library abstracts the details and provides 
  you the following function:
  
    RGB(RGBcolor); // where RGBcolor is an array of the three color components
                   // like byte RED[] = {255, 0, 0};  
                   // or an integer between 0 and 767 to display a
                   // color on the spectrum.
                   
  If you have a common anode LED instead of a common cathod, 
  just call RGB() in setup.
    
  Further exploration:
    - Create your own color definitions using RGB values.
    - Use the analog trim(), temp(), or light() values to change the colors.
*/

// sets up and initialize CGShield
#include <CGShield.h>
#include <Wire.h>         // Require for I2C communication
CGShield fs;             // Instanciate CGShield instance

// variable declarations
int delayTime = 1000;     // Delay time in milliseconds

byte RED[] =  { 255,   0,   0};
byte GREEN[] ={   0, 255,   0};
byte BLUE[] = {   0,   0, 255};


void setup() {
  Serial.begin(9600);     // Setup serial communications for troubleshooting
  Serial.println("CG_02_RGB.ino");
}


void loop(){
  // turn each color on one at a time
  RGB(RED); 
  Serial.println("RGB -> RED");
  delay(delayTime);

  RGB(GREEN);
  Serial.println("RGB -> GREEN");
  delay(delayTime);  
  
  RGB(BLUE); 
  Serial.println("RGB -> BLUE");
  delay(delayTime);

  // cycles through values of 0 to 767 to show color spectrum on RGB LED
  for (int x = 0; x < 768; x++){
    RGB(x); 
    if(!(x%10)){
	Serial.print("RGB ->");
	Serial.println(x);
    }
    delay(10);   // Delay for 10 ms (1/100th of a second)
  }
}
