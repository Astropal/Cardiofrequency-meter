#include "coeur.h"

void setup() {
  pinMode(i, OUTPUT);
}

void chenille() {
  for (i == 2; i <= 10; i = i+2) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    delay(500);
    }
  i = 2;
}

void battement() {
  for (i == 2; i <= 10; i = i+2) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  i = 2;
  delay(500);
  for (i == 2; i <= 10; i = i+2) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  i = 2;
  delay(500);
}

void uneLedSurDeux() {
  for (i == 2; i <= 10; i = i+4) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  i = 2;
  delay(500);
  for (i == 2; i <= 10; i = i+4) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  i = 2;
  delay(500);
}

void uneLedSurTrois() {
  for (i == 2; i <= 10; i = i+6) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  i = 2;
  delay(500);
  for (i == 2; i <= 10; i = i+6) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  i = 2;
  delay(500);
}
