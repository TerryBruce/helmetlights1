#include <Adafruit_NeoPixel.h>
#define PIN 6

Adafruit_NeoPixel pixel = Adafruit_NeoPixel(16, PIN);

uint32_t clr = 0xFF0000; // Start Red
uint32_t clb = 0x0000FF; // Start Blue
uint32_t clw = 0xFFFFFF; // Start White


void setup() {
  pixels.begin();
  pixels.setBrightness(55); // 1/3 brightness
}

void loop(){
  uint8_t i;
  for (i=0; i<7; i++){
    pixels.setPixelColor(i,clr);
    pixels.setPixelColor(i+8,clb);
  }
  pixels.show();
  delay (200);
  for (i=0; i<16; i++){
    pixels.setPixelColor(i,clw);
  }
  pixels.show();
  delay (200);
   for (i=0; i<7; i++){
    pixels.setPixelColor(i,clb);
    pixels.setPixelColor(i+8,clr);
  }
  pixels.show();
  delay (200);
}

