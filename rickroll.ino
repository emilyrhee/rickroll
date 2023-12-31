#include "pitches.h"

void playNote(int note, float duration) {
    float milliseconds = duration * 2000;
    
    tone(8, note, milliseconds);
    delay(milliseconds);
    noTone(8);
}

void setup() {
}

void loop() {
    playNote(NOTE_C6, 1/4.0 + 1/8.0);
    playNote(NOTE_D6, 1/4.0 + 1/8.0);
    playNote(NOTE_G5, 1/4.0);
    playNote(NOTE_D6, 1/4.0 + 1/8.0);
    playNote(NOTE_E6, 1/4.0 + 1/8.0);
    playNote(NOTE_G6, 1/16.0);
    playNote(NOTE_F6, 1/16.0);
    playNote(NOTE_E6, 1/8.0);
}
