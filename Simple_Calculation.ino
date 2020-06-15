const int first_num = 5;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Simple Calculation");

//int first_num = 5;
int second_num;
second_num = 6;

Serial.println(do_a_calc(second_num));
}

void loop() {
  // put your main code here, to run repeatedly:


}

int do_a_calc(int num_2){
  //first_num = 10;
  int result = first_num + num_2;
  //Serial.println(num_1 + num_2);
  return result;
  
}
