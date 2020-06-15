const int buzzer = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT); //pin 8 is output
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzer, 500); //1000Hz sound
  delay(1000);
  noTone(buzzer);
  delay(1000);


}
