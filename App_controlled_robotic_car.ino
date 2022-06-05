//# include <SoftwareSerial.h>
//SoftwareSerial myserial(9,10);
char data=0;
int motorpin1=2;
int motorpin2=3;
int motorpin3=4;
int motorpin4=5;
void setup() {
  // put your setup code here, to run once:
//  myserial.begin(9600);
  Serial.begin(9600);
  pinMode(motorpin1,OUTPUT);
  pinMode(motorpin2,OUTPUT);
  pinMode(motorpin3,OUTPUT);
  pinMode(motorpin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if (Serial.available()>0){
      data=Serial.read();
      Serial.println(data);
      if (data=='S'){
        digitalWrite(motorpin1,LOW);
        digitalWrite(motorpin2,LOW);
        digitalWrite(motorpin3,LOW);
        digitalWrite(motorpin4,LOW);
      }
      else if (data=='F'){
        digitalWrite(motorpin1,HIGH);
        digitalWrite(motorpin2,LOW);
        digitalWrite(motorpin3,HIGH);
        digitalWrite(motorpin4,LOW);
      }
      else if (data=='B'){
        digitalWrite(motorpin1,LOW);
        digitalWrite(motorpin2,HIGH);
        digitalWrite(motorpin3,LOW);
        digitalWrite(motorpin4,HIGH);
      }
      else if (data=='R'){
        digitalWrite(motorpin1,LOW);
        digitalWrite(motorpin2,HIGH);
        digitalWrite(motorpin3,HIGH);
        digitalWrite(motorpin4,LOW);
      }
      else if (data=='L'){
        digitalWrite(motorpin1,HIGH);
        digitalWrite(motorpin2,LOW);
        digitalWrite(motorpin3,LOW);
        digitalWrite(motorpin4,HIGH);
      }
      else{
        digitalWrite(motorpin1,LOW);
        digitalWrite(motorpin2,LOW);
        digitalWrite(motorpin3,LOW);
        digitalWrite(motorpin4,LOW);
      }
    }
}
