#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CLK_PIN   13   
#define DATA_PIN  11   
#define CS_PIN    10   
MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);
int flag = 0;

void setup() 
{
  myDisplay.begin();
  myDisplay.setIntensity(12);    // Set the intensity (brightness) of the display (0-15)
  myDisplay.displayClear();      // Clear the display
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
}
void loop() 
{
int sensorValLeft = digitalRead(4);
int sensorValWait = digitalRead(3);
int sensorValRight = digitalRead(2);
int sensorValHelp = digitalRead(5);
  if ((sensorValLeft == LOW) && (flag == 0))
   {
      myDisplay.print("<< Pass");
      delay(1000); 
      myDisplay.print("<- <-    ");                                              
      delay(1000); 
      myDisplay.print("<< Pass");
      delay(1000); 
      myDisplay.print("<- <-    ");                                              
      delay(1000); 
      myDisplay.print("<< Pass");
      delay(1000); 
      myDisplay.print("<- <-    ");                                              
      delay(1000);   
      myDisplay.displayClear();
      delay(500);   
 }

   if ((sensorValWait == LOW)&& (flag == 0))
   {
      myDisplay.setTextAlignment(PA_CENTER);
      myDisplay.print("W A I T");
      delay(1000);
      myDisplay.displayClear();
      delay(1000); 
      myDisplay.setTextAlignment(PA_CENTER);
      myDisplay.print("W A I T");
      delay(1000);
      myDisplay.displayClear();
      delay(1000); 
      myDisplay.setTextAlignment(PA_CENTER);
      myDisplay.print("W A I T");
      delay(1000);
      myDisplay.displayClear();
      delay(500); 
   }
   if ((sensorValRight == LOW) && (flag == 0)) 
   {
      myDisplay.print("Pass >>");
      delay(1000); 
      myDisplay.print("    -> ->");                                              
      delay(1000); 
      myDisplay.print("Pass >>");
      delay(1000); 
      myDisplay.print("    -> ->");                                              
      delay(1000);
      myDisplay.print("Pass >>");
      delay(1000); 
      myDisplay.print("    -> ->");                                              
      delay(1000);
      myDisplay.displayClear();
      delay(500); 
   }
   if ((sensorValHelp == LOW) && (flag == 0)) 
   {
      flag =1;
   }
   if ((sensorValHelp == HIGH) && (flag == 1)) 
   {
     flag = 2;
   }
      if ((sensorValHelp == HIGH) && (flag == 2)) 
   {
      myDisplay.setTextAlignment(PA_CENTER);
      myDisplay.print("H E L P");
      delay(700);
      myDisplay.displayClear();
      delay(400);
      flag = 2;
   }
      if ((sensorValHelp == LOW) && (flag == 2)) 
   {
      myDisplay.displayClear();
      flag = 0;
       delay (2000);
   }
   
}
