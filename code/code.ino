#include <Servo.h>

Servo motor;

float ldr1, ldr2, ldr3;

void setup() {

motor.attach(10);

Serial.begin(9600);

motor.write(0);

}

void loop() {

//Reading the sensors’ inputs

ldr1 = analogRead(A0);

ldr2 = analogRead(A1);

ldr3 = analogRead(A2);

Serial.print("Sensor 1 is reading: "); Serial.println(ldr1);

delay(100);

Serial.print("Sensor 2 is reading: "); Serial.println(ldr2);

delay(100);

Serial.print("Sensor 3 is reading: "); Serial.println(ldr3);

delay(100);

Serial.println("-----------------------------------------");

//Determining which sensor to turn to if(ldr1 > max(ldr2, ldr3)){

motor.write(150);

delay(15);

}

if(ldr2 > max(ldr1, ldr3)){

motor.write(90);

delay(15);

}

if(ldr3 > max(ldr1, ldr2)){

motor.write(30);

delay(15);

}
}
