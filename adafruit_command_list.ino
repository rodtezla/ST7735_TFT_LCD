/*
common colors:
ST77XX_BLACK, ST77XX_WHITE, ST77XX_RED, ST77XX_GREEN, ST77XX_BLUE,
ST77XX_CYAN, ST77XX_MAGENTA, ST77XX_YELLOW, ST77XX_ORANGE, ST77XX_PINK

Clear screen --> tft.fillScreen(ST77XX_BLACK);

tft.setTextWrap(true);  // places text on the next line if exceeding screen width
tft.setTextWrap(false); // Text goes off screen

Pixel --> tft.drawPixel(x, y, color);
tft.drawPixel(50, 30, ST77XX_RED);

Line  --> tft.drawLine(x0, y0, x1, y1, color);
tft.drawLine(10, 10, 100, 50, ST77XX_WHITE);
tft.drawFastHLine(0, 60, 128, ST77XX_GREEN);  // Horizontal line
tft.drawFastVLine(64, 0, 160, ST77XX_BLUE);   // Vertical line

Rectangle --> tft.drawRect(x, y, w, h, color);
tft.drawRect(10, 10, 50, 30, ST77XX_YELLOW);       // Outline
tft.fillRect(10, 10, 50, 30, ST77XX_CYAN);         // Filled
Fill rectangle -->  tft.fillRect(x, y, w, h, color);

Circle  --> tft.drawCircle(x, y, r, color);
tft.drawCircle(64, 74, 20, ST77XX_RED);   // Center (x=64, y=74), radius=20
tft.fillCircle(64, 74, 20, ST77XX_GREEN); // Filled
Fill circle --> tft.fillCircle(x, y, r, color);

Triangle  --> tft.drawTriangle(x0, y0, x1, y1, x2, y2, color);
tft.drawTriangle(10, 100, 60, 20, 110, 100, ST77XX_MAGENTA);
//      tft.fillTriangle(20, 40, 60, 40, 20, 80, ST77XX_BLUE); // right angled triangle when screen rotated at 3 for inverted landscape
Fill triangle --> tft.fillTriangle(x0, y0, x1, y1, x2, y2, color);

Round rectangle --> tft.drawRoundRect(x, y, w, h, r, color);
tft.drawRoundRect(10, 10, 100, 50, 8, ST77XX_RED);
tft.fillRoundRect(10, 10, 100, 50, 8, ST77XX_BLUE);
Fill round rectangle  --> tft.fillRoundRect(x, y, w, h, r, color);

Text color  --> tft.setTextColor(fg color , bg color);
tft.setTextColor(ST77XX_YELLOW); // Solid text color
tft.setTextColor(ST77XX_RED, ST77XX_BLACK); // Red text with black background


Text size --> tft.setTextSize(n);
tft.setTextSize(1);   // Smallest
tft.setTextSize(2);   // Double scale
tft.setTextSize(3);   // Triple scale


Text position -->  tft.setCursor(x, y);
tft.setCursor(10, 20);  // x=10, y=20 
tft.print("Hello");


Rotation  -->  tft.setRotation(0–3);
tft.setRotation(0);  // 0–3 → 0=>portait, 1=>landscape, 2=>upside down/inverted portait, 3=>inverted landscape

Invert display  -->  tft.invertDisplay(true/false);

// Get width and height
int w = tft.width();
int h = tft.height();
Serial.print("Screen: "); 
Serial.print(w); 
Serial.print("x"); 
Serial.println(h);

// create custom colors            ( R,   G,  B)
uint16_t customColor = tft.color565(255, 128, 0); // Orange
tft.fillScreen(customColor);

*/
