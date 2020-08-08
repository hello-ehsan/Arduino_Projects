#include<IRremote.h>
int rpin=2;
IRrecv irrecv(rpin);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn ();

}

void loop() {
  if (irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
  delay(100);
}