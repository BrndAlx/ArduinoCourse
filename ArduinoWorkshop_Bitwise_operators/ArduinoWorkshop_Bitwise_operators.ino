// AND & ---- OR | ---- XOR ^ ---- NOT ~ ---- SHIFT LEFT << ---- SHIFT RIGHT >> ----

const int dataPin = 6;//6
const int clockPin = 7;//7
const int latchPin = 8;//8

byte ledMap = 0b11110000;
int delayTime = 3000;

void setup() {
  // put your setup code here, to run once:
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT); 
  Serial.begin(9600);
  
  shiftWrite(0b11111111);
  Serial.println("Enter a number between 0-255");
}
void loop() {
  if(Serial.available())
  {
    Serial.println("Enter a number between 0-255");
    Serial.println();
    int inputVal = Serial.parseInt();
    byte output;
    
    while(inputVal > 255)
    {
      Serial.println("Uh oh, try again");
      Serial.println("Enter a number between 0-255"); 
      
    }
    
    Serial.print("DECIMAL: ");
    Serial.println(inputVal);
    Serial.print("BINARY: ");
    Serial.println(inputVal, BIN);
    Serial.println();

    output=ledMap & inputVal;
    Serial.print("AND result: ");
    Serial.println(output, BIN);
    shiftWrite(output);
    delay(delayTime);

    output=ledMap | inputVal;
    Serial.print("OR  result: ");
    Serial.println(output, BIN);
    shiftWrite(output);
    delay(delayTime);

    output=ledMap ^ inputVal;
    Serial.print("XOR result: ");
    Serial.println(output, BIN);
    shiftWrite(output);
    delay(delayTime);
    Serial.println();
  }
    
}
void shiftWrite(byte value)
{
  digitalWrite(latchPin, LOW );
  shiftOut(dataPin, clockPin, MSBFIRST, value);
  digitalWrite(latchPin, HIGH);
}
