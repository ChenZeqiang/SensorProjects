int potPin = 0;
int ledPin = 10;

void setup() {
  pinMode(ledPin,OUTPUT);

}

void loop() {
  int sensorValue = analogRead(potPin);
  int outputValue = map(sensorValue,0,1023,0,255);
  analogWrite(ledPin,outputValue);
  delay(100);
}
