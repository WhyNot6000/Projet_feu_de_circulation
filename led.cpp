#include <Arduino.h>
#include "LED/led.h"

LED::LED(int pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);
}
void LED::allumer() {
  digitalWrite(_pin, HIGH);
}
void LED::eteindre() {
  digitalWrite(_pin, LOW);
}
