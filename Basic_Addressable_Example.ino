#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUM_LEDS 16

Adafruit_NeoPixel strip(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

uint8_t offset = 0;  // controls animation (moving pattern)

void setup() {
  strip.begin();
  strip.show();  // turn all LEDs off
}

void loop() {
  for (int i = 0; i < NUM_LEDS; i++) {

    int state = (i + offset) % 3;

    if (state == 0) {
      strip.setPixelColor(i, strip.Color(255, 0, 0));   // Red
    }
    else if (state == 1) {
      strip.setPixelColor(i, strip.Color(0, 255, 0));   // Green
    }
    else {
      strip.setPixelColor(i, strip.Color(0, 0, 255));   // Blue
    }

  }

  strip.show();   // update LEDs
  offset++;       // shift pattern
  delay(100);     // animation speed
}
