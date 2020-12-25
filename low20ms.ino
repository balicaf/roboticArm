

#include <Servo.h>

Servo servo;

void setup() {

servo.attach(2); //D4

servo.write(0);

delay(2000);

}

void loop() {

servo.write(21);

delay(1000);

servo.write(179);

delay(1000);

for (int i=0; i<1800; i++) {
servo.write(i/10);
delay(10);
}

}
