#include <SPI.h>
#include <TFT_eSPI.h>
#include <User_Setup_Select.h>
#include <User_Setup.h>

TFT_eSPI tft = TFT_eSPI(); // Constructor for the TFT library

// 2) Define constants
#define TFT_GREY 0x5AEB // New colour

// 3) Initialiseer variabelen
int numberOfClicks = 0;

// 4) De setup
void setup(void)
{
    Serial.begin(115200);
    tft.init();
    tft.setRotation(1); //setRotation: 1: Screen in landscape
}

// 5) De loop
void loop()
{
    // Print titel
    tft.fillScreen(TFT_BLACK);               //Fill screen with random colour
    tft.setCursor(0, 0, 4);                  //(cursor at 0,0; font 4, println autosets the cursor on the next line)
    tft.setTextColor(TFT_BLACK, TFT_YELLOW); // Textcolor, BackgroundColor; independent of the fillscreen
    tft.println("- Clicks teller -");        //Print on cursorpos 0,0

    // Print aantal
    tft.setCursor(0, 50, 4);                //(cursor at 0,0; font 4, println autosets the cursor on the next line)
    tft.setTextColor(TFT_GREEN, TFT_BLACK); // Green Text with black background
    // Test some print formatting functions
    tft.print("Aantal = ");
    tft.println(numberOfClicks); // Print floating point number
    Serial.println(numberOfClicks);
    delay(100);
    numberOfClicks++;
}