void setup()
{
  pinMode(6, OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int par=analogRead(A0)/4;
  analogWrite(6,par);
  delay(0); // Wait for 1000 millisecond(s)
 
}
