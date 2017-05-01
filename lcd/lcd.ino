#include <LiquidCrystal.h>
// 定義接腳
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup(){
 lcd.begin(16, 2);
 lcd.print("04053124"); 
 Serial.begin(9600);
}
void loop()
{
  lcd.setCursor(0, 1);
  lcd.print("Leo,Vernier"); 

 if (Serial.available()) {
   
 delay(100);
 // 清除 LCD 螢幕
 lcd.clear();
 // 讀入按鍵字元
 while (Serial.available() > 0) {
 // 將字元顯示在 LCD 上
 lcd.write(Serial.read());
 }
 }
}
