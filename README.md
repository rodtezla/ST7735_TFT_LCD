# TFT color LCD Display
![Loading bar screen](https://github.com/rodtezla/ST7735_TFT_LCD/blob/newBranch/IMG_20251116_174858_980.jpg)
___
## Arduino IDE
![arduino IDE Image](https://docs.arduino.cc/static/4106ba9a36bb5b73bc95520a96f785ea/29114/AEK-CH2-SC2.1-ARDUINO-IDE.png)

To run the source code file, ensure the arduino IDE is installed on your computer

Click here to [Install the Arduino IDE](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE)
___
## ESP32
This code sketch was developed on the esp32 microcontroller with the following pin GPIO connections
#### GPIO connections used:
- LED - 3.3V 
- SCK - 18 
- SDA/MOSI - 23
- A0/DC - 2
- RST - 4
- CS - 27
- VCC - 3.3V
- GND - GND

___
![esp32 Image](https://electropeak.com/media/catalog/product/cache/a99a51fafac039a73087ecfaa8ccceba/c/o/com-03-037-new-2.jpg)

*If you're new to the esp32 microcontroller you can checkout this beginner tutorial article:* 
[Getting started with esp32](https://randomnerdtutorials.com/getting-started-with-esp32/)

> After the arduino IDE successfully being installed, you can use the link below to get a guide on how to include the esp32 boards' support to the arduino IDE
[Install the ESP32 Boards in Arduino IDE](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/)

___
## Code Sketch
Download the zip folder from the repository by clicking the button with ***<> code***
- Unzip and open the folder
- Search for an arduino code file with the same name as the zip folder
- Double click to open it in the arduino IDE
- Use the library manager to download the following libraries
  ```C++
  #include <Adafruit_GFX.h>
  #include <Adafruit_ST7735.h>

*If using and downloading libraries is new to you check out this video:* [Installing libraries in the arduino IDE](https://www.youtube.com/watch?v=LXLfA3uRP3w&t=89s)
  
>After getting the necessary libraries Upload the sketch to the esp32, I shared some images in the repo of the output screens
>
>There's another sketch file in the folder with various commands you can try out on the TFT display

