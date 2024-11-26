#include <Servo.h>
Servo myServo;
int servoState;
void setup() {
  myServo.attach(9);
  myServo.write(0);
  Serial.begin(9600);
  delay(10000);
  tone(A0, 1000); 
    delay(500);            
    noTone(A0);      
    delay(100);

  tone(A0, 1000); 
    delay(500);            
    noTone(A0);      
    delay(100);

  tone(A0, 1000); 
    delay(500);            
    noTone(A0);      
    delay(100);

    delay(10000);
  tone(A0, 1000); 
  Serial.println ("b4");
    delay(2000);     
    Serial.println ("aft");       
    noTone(A0);      
    delay(500);
    myServo.write(100);
    delay(1000);
    myServo.write(0);
}

void loop() {
  //hi
}


