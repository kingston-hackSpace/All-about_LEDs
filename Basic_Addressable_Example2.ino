
#include <Adafruit_NeoPixel.h>

#define NUM_LEDS 16
#define DATA_PIN 6
#define BRIGHTNESS 80   // 0–255

Adafruit_NeoPixel strip(NUM_LEDS, DATA_PIN, NEO_GRB + NEO_KHZ800);

//colours
uint32_t WHITE = strip.Color(255, 255, 255);
uint32_t OFF = strip.Color(0, 0, 0);

void setup() {
  strip.begin();
  strip.setBrightness(BRIGHTNESS);
  strip.show();  // turn all LEDs off
}

void loop() {
  first();
  all();
  oneByOne();
  sections();
}

void first() {
  ////////////////////////////////////////// FIRST LED ON/OFF
  strip.setPixelColor(0, WHITE);
  strip.show();
  delay(2000);

  strip.setPixelColor(0, OFF); 
  strip.show();
  delay(2000);
}

void all() {
  //////////////////////////////////////// ALL ON / OFF
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(255, 255, 255)); // White
  }
  strip.show();
  delay(2000);

  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0)); // Off
  }
  strip.show();
  delay(1000);
}

void oneByOne() {
  //////////////////////////////////////// ONE BY ONE
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(255, 255, 255)); // On
    strip.show();
    delay(100);

    strip.setPixelColor(i, strip.Color(0, 0, 0)); // Off
    strip.show();
    delay(100);
  }
}

void sections() {
  //////////////////////////////////////// SECTIONS PER 3 LEDS
  for (int i = 0; i < NUM_LEDS; i += 3) {

    // turn on group
    for (int j = i; j < i + 3 && j < NUM_LEDS; j++) {
      strip.setPixelColor(j, strip.Color(255, 255, 255));
    }
    strip.show();
    delay(500);

    // turn off group
    for (int j = i; j < i + 3 && j < NUM_LEDS; j++) {
      strip.setPixelColor(j, strip.Color(0, 0, 0));
    }
    strip.show();
    delay(500);
  }
}
