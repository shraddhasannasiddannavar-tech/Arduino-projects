#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Welcome");

  lcd.setCursor(0, 1);
  lcd.print("BGK");

  delay(1000);
}

void loop()
{
}