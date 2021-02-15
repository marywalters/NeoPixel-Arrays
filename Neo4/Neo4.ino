#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip(64, 6);

void setup() {
  strip.begin();
  strip.clear();

  strip.setBrightness(20);
}

void loop() {
  for(int i = 0; i < strip.numPixels(); i++){
      strip.setPixelColor(i,255, 0, 0);
  }
  strip.show();
  delay(500);
  strip.clear();
  strip.show();
  delay(250);
}
