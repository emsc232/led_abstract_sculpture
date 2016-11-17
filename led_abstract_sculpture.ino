int brightness = 10;    // how bright the LED is
int fadeAmount = 20;    // how many points to fade the LED by


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever

 
  
void loop() {
  
  digitalWrite(7, HIGH);  
  digitalWrite(2, HIGH); 
   
  analogWrite(6, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(55);
  
  analogWrite(3, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
                              
}
