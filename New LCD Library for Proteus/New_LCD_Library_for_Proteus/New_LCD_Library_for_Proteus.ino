#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(1,0);
  lcd.print("Capacitacao IEEE");
  lcd.setCursor(4,1);
  lcd.print("2021");
}

void loop() {
  
}
