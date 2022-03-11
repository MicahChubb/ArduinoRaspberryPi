#include <Servo.h>
Servo myservo;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}
void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');

    if(data == "move"){
      int degree = random(180);
      myservo.write(degree);
      
      Serial.print("Degree set to: ");
      Serial.println(degree);
    }
  }
}
