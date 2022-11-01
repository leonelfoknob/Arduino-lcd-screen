/*************************************makinafleo***********************/
/************************************LCD & I2C Driver*****************/
/**************PİN FOR ARDUİNO *******************
 * 5V --> 5V
 * GND --> GND
 * SCL --> SCL or A5
 * SDA --> SDA or A4
 */

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.begin (16, 2);
}

void loop() {
  lcd.setCursor(1, 0);
  lcd.print("Yapabildin!!!");
  lcd.setCursor(1, 1);
  lcd.print("You make it!!!");
}


/************************************* LCD & I2C Driver ***************/
/*************************************makinafleo***********************/
//youtube : makinafleo
//instagram : makin_afleo
//website : makinafleo.wordpress.
