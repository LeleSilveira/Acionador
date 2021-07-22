#include "math.h"
#define pot 0
int val1 = 0;
int val2 = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
   val1= analogRead(pot);
   delay(1000);
   val2= analogRead(pot);
   if(abs(val1-val2)>100){
    Serial.println("1");
   }
   delay(500);
}
