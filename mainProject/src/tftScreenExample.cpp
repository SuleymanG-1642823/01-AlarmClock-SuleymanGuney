/*#include <SPI.h>
#include <TFT_eSPI.h>
#include <User_Setup_Select.h>
#include <User_Setup.h>


//  Fonts 1,2,4 ;Font 3 does not seem to be working reliably, neither does 5, and greater.


#define TFT_GREY 0x5AEB // New colour

TFT_eSPI tft = TFT_eSPI();       // Constructor for the TFT library

void setup(void)
{
  tft.init();
  tft.setRotation(2);   //setRotation: 2: Screen upside down in landscape
}

void loop()
{
  tft.fillScreen(random(0xFFFF));   //Fill screen with random colour
  tft.setCursor(0, 0, 2);   //(cursor at 0,0; font 2, println autosets the cursor on the next line)

  tft.setTextColor(TFT_WHITE, TFT_BLACK); // Textcolor, BackgroundColor; independent of the fillscreen
  tft.setTextSize(1);     //Set text size multiplier to 1

  tft.println("Hello World!");    //Print on cursorpos 0,0

  tft.setTextColor(TFT_WHITE, TFT_BLACK); //Set the font colour to be yellow with no background,
  for (int i = 1; i < 5; i++) {
    tft.setTextFont(i);
    tft.print("HAAAH "); tft.println(i);
  }

  // Set the font colour to be red with black background, set to font 4
  tft.setTextColor(TFT_RED, TFT_WHITE);
  tft.setTextFont(4);
  tft.println((long)3735928559, HEX); //Prints constant in HEX

  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.setTextFont(4);
  tft.print("Large ");
  tft.println("text on screen.");    //Show printing on single line

  tft.setTextFont(1);
  tft.println(F("This will probably be barely readable.")); // Show wrapping and store strings in FLASH "F()"to save RAM

  // Test some print formatting functions
  float fnumber = 123.45;

  tft.setTextColor(TFT_BLUE);    // Set the font colour to be blue with no background, set to font 2
  tft.setTextFont(2);

  tft.print("Float = "); tft.println(fnumber);           // Print floating point number
  tft.print("Binary = "); tft.println((int)fnumber, BIN); // Print as integer value in binary
  tft.print("Hexadecimal = "); tft.println((int)fnumber, HEX); // Print as integer number in Hexadecimal
  delay(10000);   //Wait for 10s
}
*/