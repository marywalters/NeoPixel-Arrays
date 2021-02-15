#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(64, 6);

void setup() {
  strip.begin();
  strip.clear();

  strip.setBrightness(20);
}

void loop() {

  strip.setPixelColor(0,255, 0, 0);
  strip.show();
}
