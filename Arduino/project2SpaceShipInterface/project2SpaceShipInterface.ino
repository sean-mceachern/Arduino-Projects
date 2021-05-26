
int switchState = 0;

void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  
}

void loop() 
{
  switchState = digitalRead(2);

  // the button is not pressed
  if(switchState == LOW)
  {
    digitalWrite(3, HIGH); //green
    digitalWrite(4, LOW); //red
    digitalWrite(5, LOW); //red
  }
  // the button is pressed
  else
  {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(500); // wait a quarter second

    //toggle the LED lights
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(500); // wait for a quarter second
//
//    digitalWrite(3, HIGH);
//    digitalWrite(4, LOW);
//    digitalWrite(5, LOW);
//    delay(500);
//
//    digitalWrite(4, HIGH);
//    digitalWrite(3, LOW);
//    delay(500);
    
  }

}
