#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

char rowOne[16]{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char rowTwo[16]{' ', ' ', ' ', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

int switchPin = 2;
bool isJump = false;
int switchState = 0;

void setup() {
    Serial.begin(9600);
    lcd.begin(16, 2);
    pinMode(switchPin, INPUT);
}

void loop() {
    switchState = digitalRead(switchPin);

    if (switchState == HIGH) {
        lcd.print("Pressed");
    } else if (switchState == LOW) {
        lcd.print("Not Pressed");

    }

    delay(500);
    lcd.clear();
}
