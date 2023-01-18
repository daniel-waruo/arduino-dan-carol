int a_positive = 13;
int a_negative = 12;
int a_speed = 11;

int b_positive = 4;
int b_negative = 2;
int b_speed = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(a_positive, OUTPUT);
  pinMode(a_negative, OUTPUT);
  pinMode(a_speed, OUTPUT); // Analog 
  
  pinMode(b_positive, OUTPUT);
  pinMode(b_negative, OUTPUT); 
  pinMode(b_speed, OUTPUT); // Analog
}

void loop() {
  // put your main code here, to run repeatedly:
  // code for moving
  move_forward();
  delay(1000);
  move_backward();
  delay(1000);
}

void move_forward(){
  analogWrite(a_speed,255);
  digitalWrite(a_positive,HIGH);
  digitalWrite(a_negative,LOW);

  analogWrite(b_speed,255);
  digitalWrite(b_positive,HIGH);
  digitalWrite(b_negative,LOW);  
}

void move_backward(){
  analogWrite(a_speed,255);
  digitalWrite(a_positive,LOW);
  digitalWrite(a_negative,HIGH);

  analogWrite(b_speed,255);
  digitalWrite(b_positive,LOW);
  digitalWrite(b_negative,HIGH);  
}
