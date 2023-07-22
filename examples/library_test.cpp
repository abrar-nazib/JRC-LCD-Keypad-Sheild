// Sample using LiquidCrystal library
#include <LiquidCrystal.h>
#include <Arduino.h>
#include <JRC.h>
#include <JRC_LCDShield.h>

JRC_LCDSheild lcdShield;
LiquidCrystal lcd = lcdShield.screen;

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2); // start the library
  lcd.setCursor(0, 0);
  lcd.print("Created By");
  lcd.setCursor(0, 1);
  lcd.print("JRC board");
  delay(3000);
}
void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Press any button");
  delay(20);
  lcd.setCursor(0, 1);
  lcd.print(lcdShield.getPressedButtonStr());
  delay(150);
}

// to clear the LCD display, use the comment below
// lcd.clear();