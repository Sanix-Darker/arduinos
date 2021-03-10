// This file will contain all necessary stuff for 
// for the LCD liquidCrystal
//
// By darker

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void init_lcd()
{
    lcd.home();
    // initializing the LCD
    lcd.init();  
    // Enable or Turn On the backlight 
    lcd.backlight(); 
}

void print_lcd(String msg, int line, int column)
{
    delay(500);
    lcd.clear();
    lcd.setCursor(line, column);

    lcd.print(msg);
}

