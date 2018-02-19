int LEDPin=13;
int waitTime=1000;

void setup() {
  // put your setup code here, to run once:
  //pinMode(13,OUTPUT);
  pinMode(LEDPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 // digitalWrite(13,HIGH);
  digitalWrite(LEDPin,HIGH);
  delay(waitTime);//milliseconds
  digitalWrite(LEDPin,LOW);
  delay(waitTime);

}
