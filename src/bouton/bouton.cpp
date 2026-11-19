#include <Arduino.h>
#include "Bouton/bouton.h"

BOUTON::BOUTON(int pin) {
  _pin = pin;
  pinMode(_pin, INPUT);
}

bool BOUTON::LECTURE() {
  return digitalRead(_pin);
}
