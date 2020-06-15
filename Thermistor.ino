#define SERIESRESISTOR 9950 //value of other resistor, I used 10k
#define THERMISTORPIN A0 //pin location

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float reading;

  reading = analogRead(THERMISTORPIN);

  Serial.print("Analog reading ");
  Serial.println(reading);

  //convert value to resistance
  reading = (1023 / reading)-1;
  reading = SERIESRESISTOR / reading;
  Serial.print("Thermistor resistance ");
  Serial.println(reading);

  delay(1000);
}
