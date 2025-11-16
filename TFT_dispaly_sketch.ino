/*
ST7735 - TFT LCD color Display (128x160px)
--------------------------------------------------
pin purpose
-----------
VCC --> Power Supply of 3.3V DEFAULT or 5V when J1 is shorted to the 3.3v regulator on the display 
GND --> Ground/negative connection
SCL(Serial Clock) --> SPI bus clock signal input from the microcontroller.
DIN/MOSI/SDA --> Data Input, carries data from the microcontroller to the display.
CS(Chip Select) --> Active low signal to enable/disable the display module for SPI communication.
DC(Data Command)--> Selects whether the data on the MOSI pin is a command(low/0) or display data (high/1).
RST --> Can be used for Reseting/restarting the display when the MCU sends a High signal to it.
LED --> Controls the display's backlight (connect to 3.3V or a PWM pin for brightness control.

Sketch Author: Tumwesigire Michael
License: MIT License (https://opensource.org/licenses/MIT)
*/
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

#define TFT_CS     27
#define TFT_RST    4
#define TFT_DC     2

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

// x coordinates used to create loading bar animation effect
int x = 10, x1 = 20;

void loadingBar(){
      uint16_t darkGreen = tft.color565(0, 179, 0); // creates a custom RGB darkGreen color 
      tft.fillScreen(ST77XX_MAGENTA); // fills screen with magenta/purple color
      tft.fillRect(0, 0, 160, 30, ST77XX_BLUE); // creates a blue background for text "Loading"

      tft.setTextSize(2);   
      tft.setCursor(15, 7);
      tft.setTextColor(ST77XX_WHITE); 
      tft.print("Loading");
      tft.fillRect(7, 40, 160, 34, ST77XX_WHITE); // background for the loading bar
      delay(1500);  
        
      for(int i = 0; i < 10; i++){
          tft.fillRect(x, 43, x1, 28, darkGreen); 
          delay(1000);    
          
          x += 10;
          Serial.print("\nValue of x: ");
          Serial.print(x);
          Serial.print("\t");
          
          x1 += 10;
          Serial.print("| Value of x1: ");
          Serial.println(x1);
      }
}

void setup(){
      Serial.begin(115200);
      tft.initR(INITR_BLACKTAB); 
      tft.setRotation(3);  
      tft.fillScreen(ST77XX_BLACK);      
      delay(1500);  
      
      loadingBar();

      tft.fillRect(0, 0, 160, 60, ST77XX_BLUE);  // draw a blue colored rectangle 
      tft.setTextSize(3);   
      tft.setCursor(30, 20);
      tft.setTextColor(ST77XX_WHITE); 
      tft.print("Hello");

      tft.fillRect(0, 60, 160, 128, ST77XX_MAGENTA);  // draw a green colored rectangle 
      tft.setTextSize(3);   
      tft.setCursor(25, 85);
      tft.setTextColor(ST77XX_WHITE); 
      tft.print("World!");

}
void loop(){}
