#include <LiquidCrystal_I2C.h>


//LCD
#define I2C_ADDR    0x27
#define LCD_COLUMNS 20
#define LCD_LINES   4

LiquidCrystal_I2C lcd(I2C_ADDR, LCD_COLUMNS, LCD_LINES);

//Inputs
#define freqPot A0
#define ctrV A1
#define ctrH A2

//H Bridge drivers
#define H1 2
#define H2 4


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(20,4);
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  int frequenz = readFreq();
}

int readFreq(){
  int freq = map(analogRead(freqPot),0,1023,0,1000000);
  lcd.setCursor(0,0);
  lcd.print("Freq:");
  lcd.setCursor(6,0);
  lcd.print(freq);
  return freq;
}


//Function for moving the LCD display, selceting items and changing values
void cursor(){



}
