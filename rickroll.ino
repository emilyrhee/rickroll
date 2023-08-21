#include "pitches.h"

int quarterNote = 1000;
int halfNote = quarterNote * 2;
int eighthNote = quarterNote / 2;
int dot(int note) {
  return note / 2;
}

void playNote(int note, int duration, int rest = 1000) {
    tone(8, note, duration);
    delay(rest);
    noTone(8);
}

void setup() {
}

void loop() {
    playNote(NOTE_C6, quarterNote);
    playNote(NOTE_D6, quarterNote);
    playNote(NOTE_G5, quarterNote);
    playNote(NOTE_D6, quarterNote);
    playNote(NOTE_E6, quarterNote);
    playNote(NOTE_G6, eighthNote, 500);
    playNote(NOTE_F6, eighthNote, 500);
    playNote(NOTE_E6, eighthNote, 500);
}
