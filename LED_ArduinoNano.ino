int pinLED1 = 2;
int pinLED2 = 3;
int pinLED3 = 4;
int pinLED4 = 5;  
int pinLED5 = 6;
int pinLED6 = 7;  
int pinLED7 = 8;
int pinLED8 = 9;  
int pinLED9 = 13;

void setup()
{
pinMode(pinLED1, OUTPUT);
pinMode(pinLED2, OUTPUT);
pinMode(pinLED3, OUTPUT);
pinMode(pinLED4, OUTPUT);
pinMode(pinLED5, OUTPUT);
pinMode(pinLED6, OUTPUT);
pinMode(pinLED7, OUTPUT);
pinMode(pinLED8, OUTPUT);
pinMode(pinLED9, OUTPUT);
}

void loop() 
{
  digitalWrite(pinLED1,HIGH);
  delay(1000);
  digitalWrite(pinLED1,LOW);
  delay(1000);

  digitalWrite(pinLED2,HIGH);
  delay(1000);
  digitalWrite(pinLED2,LOW);
  delay(1000);

  digitalWrite(pinLED3,HIGH);
  delay(1000);
  digitalWrite(pinLED3,LOW);
  delay(1000);

  digitalWrite(pinLED4,HIGH);
  delay(1000);
  digitalWrite(pinLED4,LOW);
  delay(1000);

  digitalWrite(pinLED5,HIGH);
  delay(1000);
  digitalWrite(pinLED5,LOW);
  delay(1000);

  digitalWrite(pinLED6,HIGH);
  delay(1000);
  digitalWrite(pinLED6,LOW);
  delay(1000);

digitalWrite(pinLED7,HIGH);
  delay(1000);
  digitalWrite(pinLED7,LOW);
  delay(1000);

  digitalWrite(pinLED8,HIGH);
  delay(1000);
  digitalWrite(pinLED8,LOW);
  delay(1000);

  digitalWrite(pinLED9,HIGH);
  delay(3000);
  digitalWrite(pinLED9,LOW);
  delay(2000);
}