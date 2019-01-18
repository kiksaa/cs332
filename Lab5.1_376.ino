#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(16,2);
  lcd.print("Hello wrold");
  
}

void loop()
{
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
  /*lcd.noCorsor();
  delay(500);
  lcd.cursor();
  delay(500);
  
  lcd.noBilnk();
  delay(500);
  lcd.bilnk();
  delay(500);*/
  
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
  
}