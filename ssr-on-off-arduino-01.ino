void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
int dec=0;
void loop() {
  // put your main code here, to run repeatedly:
  dec=255;
  Serial.println("SSR on");
  analogWrite(9, dec);
  delay(1000);
  dec=0;
  Serial.println("SSR off");
  analogWrite(9, dec);
  delay(1000);
}
