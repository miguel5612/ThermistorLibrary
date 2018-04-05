#include "temperatura.h"

temperatura temp1(A0,0);

void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);
}

void loop() {
  double temp = temp1.analog2temp();
  Serial.print("Temperatura: ");
  Serial.println((String)temp);
  Serial.print("----------------------");
  // put your main code here, to run repeatedly:
}
