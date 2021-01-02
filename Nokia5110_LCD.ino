#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

// Declare LCD object for software SPI
// Adafruit_PCD8544(CLK,DIN,D/C,CE,RST)
Adafruit_PCD8544 display = Adafruit_PCD8544(7, 6, 5, 4, 3);

int rotatetext = 1;

void setup()   {
  Serial.begin(9600);

  //Initialize Display
  display.begin();

  // you can change the contrast around to adapt the display for the best viewing!
  display.setContrast(500);

  // Clear the buffer
  display.clearDisplay();

}

void loop() {
    // Display Text
  display.setTextSize(1.5);
  display.setTextColor(BLACK);
  display.setCursor(5,10);
  display.println("La multi ani, tuturor!");
  display.display();
  delay(2000);
  display.clearDisplay();


  // Display Inverted Text
  display.setTextColor(WHITE, BLACK); // 'inverted' text
  display.setCursor(5,10);
  display.println(" Merry");
  display.println("  Christmas,");
  display.println("  everyone!");
  display.display();
  delay(2000);
  display.clearDisplay();
  
  
  }
