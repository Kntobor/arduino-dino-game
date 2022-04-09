# Arduino Dino-Game

It's the dino game but on a 16*2 LCD powered by an Arduino Uno

## Physical Specification

- One Arduino Uno
- A 16*2 LCD Screen
  - Uno Digital Pin 2 <> LCD DB7
  - Uno Digital Pin 3 <> LCD DB6
  - Uno Digital Pin 4 <> LCD DB5
  - Uno Digital Pin 5 <> LCD DB4
  - LCD VSS, LED- & R/W <> Ground
  - LCD VDD <> 5V
  - LCD E <> Uno Digital Pin 11
  - LCD RS <> Uno Digital Pin 12
  - LCD LED+ <> 220-ohm Resistor <> 5V
  - Potentiometer <> LCD V0
- Push Button <> Uno Digital Pin 7