void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  

  if(digitalRead(7) == 1)
  {
    Serial.println("Sensor is being touched");
  }
  else
  {
    Serial.println("Neutral");
  }

  delay(100);
  
}
