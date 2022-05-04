// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(9000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
   // Wait for 1000 millisecond(s)
  
  digitalWrite(2,HIGH);
    delay(5000);
  digitalWrite(2,LOW);
  
  
  digitalWrite(1,HIGH);
  delay(9000);
  digitalWrite(1,LOW);
   
  
  
  
}