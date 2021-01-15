int led = 13; // the pin the LED is connected to
void setup() {
  pinMode(led, OUTPUT); // Declare the LED as an output
}

void loop() {
  digitalWrite(led, HIGH); // Turn the LED on
  //delay(1000);// Wait for 1000 milliseconds (1 second)
  //digitalWrite(led, LOW); // Turn the LED off
  //delay(1000);// Keep it off
}
