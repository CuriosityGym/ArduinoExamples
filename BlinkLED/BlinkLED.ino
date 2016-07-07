int delayOn=1000; //add the duration in milliseconds you want the light to stay on.
int delayOff=500;// Add the duration in milliseconds you want the light to stay off.
byte lightPin=13;// Light 0 on white board is connected to pin 13.
void setup() {
//Code added here runs only once
pinMode(lightPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:                               
  digitalWrite(lightPin, HIGH); // Make the lightPin High, turning on the light
  delay(delayOn); //Wait for delayOn milliseconds

  digitalWrite(lightPin, LOW); // Make the lightPin High, turning off the light
  delay(delayOff);//Wait for delayOff milliseconds

  //After this, the loop terminates and goes back to top of the Loop function 
  

}
