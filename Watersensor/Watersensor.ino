void setup(){
 
Serial.begin(9600);
 
}
 
void loop(){
 
Serial.print("Water level Sensor Value:");
Serial.println(analogRead(A1));
delay(500);
 
}
