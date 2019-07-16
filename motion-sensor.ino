int led = 13;                // the pin that the LED is atteched to
int sensor = 5;              // the pin that the sensor is atteched to
int state = LOW;             // by default, no motion detected
int val = 0;                 // variable to store the sensor status (value)

void setup() {
  pinMode(led, OUTPUT);      // initalize LED as an output
  pinMode(sensor, INPUT);    // initialize sensor as an input
  Serial.begin(9600);        // initialize serial
}

void loop(){
  val = digitalRead(sensor);   // read sensor value
  if (val == HIGH) {           // check if the sensor is HIGH
    digitalWrite(led, HIGH);   // turn LED ON
    Serial.println("DETECTED");
    delay(3000);                // delay 100 milliseconds
  } 
  else {
      digitalWrite(led, LOW); // turn LED OFF
      Serial.println("UNDETECTED");
      delay(200);             // delay 200 milliseconds 
  }
}
