void setup() {
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  
  int light = analogRead(A0);
  Serial.println(light);
  

  if(light>800)
  {
    digitalWrite(10,HIGH);
   digitalWrite(6,LOW);//yeşil
  digitalWrite(7,HIGH);//kırmızı
  digitalWrite(5,LOW);//mavi
  delay(5000);
  }

  
  

}
