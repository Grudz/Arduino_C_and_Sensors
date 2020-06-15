int btn_pressed = 20; //btn pressed simulation

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  switch (btn_pressed) {
    case 1:
      Serial.println("Button 1 Pressed");
      break;
    case 2:
      Serial.println("Button 2 Pressed");
      break;
    default:
      Serial.println("IDK which button was pressed");
      //default is option
      break;
  }

}



void loop() {
  // put your main code here, to run repeatedly:

}
