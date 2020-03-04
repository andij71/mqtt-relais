#include <Arduino.h>


#define LED 2
int i = 0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  i++;
  Serial.println(i);
  
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}