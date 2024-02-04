int red = 10;
void setup() {
pinMode(red,OUTPUT);
}

void loop() {
  analogWrite(red,20);
  delay(250);
  analogWrite(red,64);
  delay(250);
  analogWrite(red,128);
  delay(250);
  analogWrite(red,192);
  delay(250);
  analogWrite(red,255);
  delay(1000);
  analogWrite(red,192);
  delay(250);
  analogWrite(red,128);
  delay(250);
  analogWrite(red,64);
  delay(250);
  analogWrite(red,20);
  delay(250);

}
