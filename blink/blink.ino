// For playing with LEDs


int left = 10;
int right = 9;
int value = 0;

void setup(){
  pinMode(left,OUTPUT);
  pinMode(right,OUTPUT);
}

void loop(){
  analogWrite(left,value);
  value++;
  if(value>=255){
    value=0;
  }
  delay(30);
}
