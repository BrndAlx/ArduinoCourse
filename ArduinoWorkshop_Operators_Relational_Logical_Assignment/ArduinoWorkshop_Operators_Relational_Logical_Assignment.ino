//global variable to show only one time 
int i =0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = 6;
  int y = 4;
 
  if( i == 0){
    Serial.println("------------------------Relational Operators -------------------------");
    Serial.println("x = 6");
    Serial.println("y = 4");
    Serial.print("Equal: ");
    if ( x == y){
      Serial.println("TRUE");
      }else{
      Serial.println("FALSE");
    }
    Serial.print("Not Equal: ");
    if ( x != y){
      Serial.println("TRUE");
      }else{
      Serial.println("FALSE");
    }
    Serial.print("Bigger than: ");
    if ( x > y){
      Serial.println("TRUE");
      }else{
      Serial.println("FALSE");
    }
    Serial.print("Smaller than: ");
    if ( x < y){
      Serial.println("TRUE");
      }else{
      Serial.println("FALSE");
    }
    Serial.print("Bigger or equal than: ");
    if ( x >= y){
      Serial.println("TRUE");
      }else{
      Serial.println("FALSE");
    }
    Serial.print("Bigger or Smaller than: ");
     if ( x <= y){
      Serial.println("TRUE");
      }else{
      Serial.println("FALSE");
    }
    Serial.println("----------------------------------------------------");

    Serial.println("------------------------Logical Operators -------------------------");
    Serial.println("x=1");
    Serial.println ("y=0");
    
    Serial.print("AND : ");
     if ( x && y){
      Serial.println("TRUE");
      }else{
      Serial.println("FALSE");
    }
    Serial.print("OR : ");
     if ( x || y){
      Serial.println("TRUE");
      }else{
      Serial.println("FALSE");
    }
    Serial.print("NOT : ");
     if (!x){
      Serial.println("TRUE");
      }else{
      Serial.println("FALSE");
      Serial.println("x value has changed to: ");
      Serial.print(x);
    }
    Serial.println("------------------------------------------------------------"); 
    
    Serial.println("------------------------Assignment Operators -------------------------");
    int z=2;
    Serial.print("Value of z=");
    Serial.println(z);
    Serial.print("z+=2 same as z=z+2. Result:");
    z+=2;
    Serial.println(z);
    z=2;
    Serial.print("z-=2 same as z=z-2. Result:");
    z-=2;
    Serial.println(z);
    z=2; 
    Serial.print("z*=2 same as z=z*2. Result:");
    z*=2;
    Serial.println(z);
    z=2; 
    Serial.print("z/=2 same as z=z/2. Result:");
    z/=2;
    Serial.println(z);
    z=2; 

    
  i++;
  }
  delay(5000);
}
