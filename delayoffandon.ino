#define out1 2             //Röle kontrol ucu 
#define out2 3
void setup() 
{ 
pinMode(out1, OUTPUT);    //Röle kontrol ucu çıkış olarak tanımlanmıştır
pinMode(out2, OUTPUT);    //Röle kontrol ucu çıkış olarak tanımlanmıştır
Serial.begin(9600);

} 

void loop() 
{ 
digitalWrite(out1,LOW);   // Röle'nin kontrol edildiği pin 1 
digitalWrite(out2,HIGH);  // Röle'nin kontrol edildiği pin 2 
delay(1000); // 1 Saniye Bekle 
digitalWrite(out1,HIGH);  // Röle'nin kontrol edildiği pin 1 
digitalWrite(out2,LOW);   // Röle'nin kontrol edildiği pin 2 
delay(1000); // 1 Saniye Bekle 
} 
