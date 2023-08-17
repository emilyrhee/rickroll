#include "pitches.h"

void playNote(int note, int duration) {
    tone(8, note, duration);
    delay(1000);
    noTone(8);
}

void setup() {
}

void loop() {
    playNote(NOTE_C6, 1000);
    playNote(NOTE_D6, 1000);
    
}
