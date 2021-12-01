void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  for(int cont=1; cont<=3; cont++)
  {
  digitalWrite(5, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(200); // Wait for 1000 millisecond(s)
  
  digitalWrite(6, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(6, LOW);
  delay(200); // Wait for 1000 millisecond(s)
  
  digitalWrite(7, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(200); // Wait for 1000 millisecond(s)
  
  digitalWrite(9, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(200); // Wait for 1000 millisecond(s)
  
  digitalWrite(10, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(200); // Wait for 1000 millisecond(s)
    
    
    
  digitalWrite(10, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(200); // Wait for 1000 millisecond(s)
    
  digitalWrite(9, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(200); // Wait for 1000 millisecond(s)
    
  digitalWrite(7, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(200); // Wait for 1000 millisecond(s) 
    
  digitalWrite(6, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(6, LOW);
  delay(200); // Wait for 1000 millisecond(s)
    
  digitalWrite(5, HIGH);
  delay(200); // Wait for 1000 millisecond(s)
  digitalWrite(5, LOW);
  delay(200); // Wait for 1000 millisecond(s)
  }
  
  
  ///PISCAR 3 VEZES
  for(int cont =1; cont <=3; cont++)
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(200);
    
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    delay(200);
  
  
  }
  

}
