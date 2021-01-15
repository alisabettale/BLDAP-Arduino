/* buzzerTones
 * modified 10/24/17 D. Brancazio
 * modified 01/15/21 A. Bettale
 * plays notes to a buzzer at pin 9
 * frequencies for 1 full musical scale: C D E F G A B C == 262, 294, 330, 349, 392, 440, 494, 523
*/

#define buzzerPin 9 //sets up speaker on Pin 6
int scaleChoice;

void setup()
{
  Serial.begin(9600); //initializes serial monitor
  pinMode(buzzerPin, OUTPUT); //sets buzzer as an output
}

void loop()
{
  Serial.println("Press 1 to play the scale up, 2 to play it down");
  while(Serial.available() == 0)   { } 
  scaleChoice = Serial.parseInt(); //read in an integer from serial monitor
  if (scaleChoice == 1)
  {
    tone (buzzerPin, 262, 500); delay(500);
    tone (buzzerPin, 294, 500); delay(500);
    tone (buzzerPin, 330, 500); delay(500);
    tone (buzzerPin, 349, 500); delay(500);
    tone (buzzerPin, 392, 500); delay(500);
    tone (buzzerPin, 440, 500); delay(500);
    tone (buzzerPin, 494, 500); delay(500);
    tone (buzzerPin, 523, 500); delay(500);
  }
  else if (scaleChoice == 2)
  {
    tone (buzzerPin, 523, 500); delay(500);
    tone (buzzerPin, 494, 500); delay(500);
    tone (buzzerPin, 440, 500); delay(500);
    tone (buzzerPin, 392, 500); delay(500);
    tone (buzzerPin, 349, 500); delay(500);
    tone (buzzerPin, 330, 500); delay(500);
    tone (buzzerPin, 294, 500); delay(500);
    tone (buzzerPin, 262, 500); delay(500);
  }

   else       
   Serial.println ("This is not a valid key");

}
 
