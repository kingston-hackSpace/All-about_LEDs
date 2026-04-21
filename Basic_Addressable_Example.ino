#include <Adafruit_NeoPixel.h>

// Define the pin connected to the Neopixel data line
#define PIN 6

// Define the number of LEDs in the strip
#define NUM_LEDS 16

// Create a NeoPixel object
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin(); // Initialize the Neopixel strip
  strip.show();  // Turn off all LEDs initially
}

void loop() {
  // Call a function to display a rainbow effect
  rainbowCycle(5); // Adjust the delay for speed
}

// Function to create a rainbow effect
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for (j = 0; j < 256 * 5; j++) { // 5 cycles of all colors
    for (i = 0; i < strip.numPixels(); i++) {
      // Calculate color for each pixel
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show(); // Update the strip with new colors
    delay(wait);  // Pause for the specified time
  }
}

// Helper function to generate rainbow colors
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  } else {
    WheelPos -= 170;
    return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  }
}
