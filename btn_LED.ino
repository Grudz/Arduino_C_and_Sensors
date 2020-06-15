int btnState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  btnState = digitalRead(3);
  
  if (btnState == HIGH)
{
  digitalWrite(9, HIGH);
  Serial.println("HIGH");
}else
{
  digitalWrite(9, LOW);
Serial.println("LOW");
}
}
