#include "pitches.h"

int quarterNote = 1000;
int dot(int note) {
  return note / 2;
}

void playNote(int note, int duration, int rest = 0) {
    tone(8, note, duration);
    delay(1000 + rest);
    noTone(8);
}

void setup() {
}

void loop() {
    playNote(NOTE_C6, 1000);
    playNote(NOTE_D6, 1000);
    playNote(NOTE_G5, 1000);
    playNote(NOTE_D6, 1000);
}
