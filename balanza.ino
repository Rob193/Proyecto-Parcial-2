#include <LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2);
void setup()
{
    lcd.begin(20,4);
}
void loop()
{
   float x2=0,x1=1000,Vout=0,s=0,g=9.81
  B= (A*5)/1023;
  C= 1000*((5/B)-1);
  double F=0;
  F=pow((B/6081.8),-1.0703);
  lcd.print("Fuerza:");
  lcd.print(f);
  lcd.print("n");
  lcd.setcursor(0,1);
  lcd.print("Peso:");
  lcd.print(m);
  lcd.print("G");
  delay(2000);
  lcd.Clear
}
