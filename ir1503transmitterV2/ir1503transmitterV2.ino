#include <IRLibAll.h>

IRsend mySender;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.read() != -1) {
    //send a code every time a character is received from the serial port
    mySender.send(SONY,0xa8bca, 20);
  }
}
