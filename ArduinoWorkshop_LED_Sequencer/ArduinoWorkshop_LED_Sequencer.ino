int ledArray[5] = {2,3,4,5,6};

int delayTime = 150;

void setup() {
  //initialise ledArray as outputs
  for(int i = 0; i < 5; i++)
  {
    pinMode(ledArray[i], OUTPUT);
  }
}

void loop() {
  //turn LEDs on from 0-7
  for(int i = 0; i < 5 ; i++)
  {
    digitalWrite(ledArray[i], HIGH);
    delay(delayTime);
  }

  //turn LEDs off from 7-0
  for(int i = 0; i <5 ; i++)
  {
    digitalWrite(ledArray[i], LOW);
    delay(delayTime);
  }
}
