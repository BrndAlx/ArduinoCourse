int ledPin = 3;
int buttonPin = 2;
int potPin = A0;

void setup() {
  // setup pin modes
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);             
  pinMode(potPin, INPUT);

  // initialise serial port with baud rate of 9600
  Serial.begin(9600);
}

void loop() {
  // read the state of buttonPin and store it as buttonState (0 or 1)
  int buttonState = digitalRead(buttonPin);
  
  // read the value of the pot, divide it by 4, and store it as potValue
  int potValue = analogRead(potPin);
  int filteredPotValue = potValue / 4;

  // turn led on with the value of potValue
  analogWrite(ledPin,filteredPotValue);

  // print the value of the button
  Serial.print("Button: ");
  Serial.print(buttonState);
  Serial.print("   ");

  // print the value of the pot
  Serial.print("Pot = ADC(10bits): ");
  Serial.print(potValue); //ADC Value
  Serial.print("   ");

  // print the value of the pot / 4 with a line return at the end
  Serial.print("Pot/4 = PWM(8bits): ");
  Serial.println(filteredPotValue); //PWM Value
}
