#ifndef ESP32
#pragma message(THIS EXAMPLE IS FOR ESP32 ONLY !)
#error Select ESP32 board.
#endif

void setup()
{
Serial.begin(9600);
pinMode(8, INPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(8))

{
  digitalWrite(13,LOW);
  Serial.println("LOW");
  }
  else
  {
   Serial.println("HIGH"); 
   digitalWrite(13,HIGH);
    }
}
