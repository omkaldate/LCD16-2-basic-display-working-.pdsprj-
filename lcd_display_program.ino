 #include<LiquidCrystal.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal lcdone(13,12,11,10,9,8);
LiquidCrystal_I2C lcdtwo(0x27 , 16 ,2);

void setup() {

}

void loop() {
  lcdone.begin(16,2);
  lcdone.print("starting....");
   lcdtwo.init();
   lcdtwo.backlight();
  lcdtwo.print("starting....");
  delay(1000);
   lcdone.clear();
  lcdtwo.clear();

  
  lcdone.print("this is LCD one");
  lcdtwo.print("this is LCD two");

  lcdone.setCursor(0,1);
  lcdone.print("using arduino");
  lcdtwo.setCursor(0,1);
  lcdtwo.print("using arduino");
  delay(1000);
  lcdone.clear();
  lcdtwo.clear();

  lcdone.print("arduino UNO");
  lcdtwo.print("arduino UNO");
  delay(1000);
  lcdone.clear();
  lcdtwo.clear();
  
  lcdone.print("ending....");
  lcdtwo.print("ending....");
  delay(1000);
  
  lcdone.clear();
  lcdtwo.clear();
  }
