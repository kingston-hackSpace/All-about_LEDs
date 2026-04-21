# Addressable LED Strips

*Note: This tutorial is intended for **small to medium projects** (single strips or short runs).
It is not meant for large installations with hundreds of LED strips that require advanced power distribution and electrical planning.*

-----
## What is an Addressable LED Strip

Addressable LED Strips are a type of LED stripc in which **each LED can be controlled individually**.

This means you can make different colors, patterns, and animations along the same strip—at the same time.

Also called: 

- **Smart** LED Strips

- **NeoPixel** LED Strips

- Sometimes referred to by chip names like **WS2812B** or **SK6812**

-----
## Powering ⚠️ 

Powering LED strips can be dangerous if done incorrectly.

Using the wrong voltage (V) or insufficient wiring for the required current (A) can damage components, cause overheating, and create a fire hazard.

**Correct powering is crucial.**

See the guide below to learn how to safely calculate and choose the correct power supply:

[Guide: How to power your addressable LED Strip] - pending

[Powering Tips](https://learn.adafruit.com/adafruit-neopixel-uberguide/powering-neopixels)

[Best Practices](https://learn.adafruit.com/adafruit-neopixel-uberguide/best-practices)

-----
## Arduino? Or another microcontroller? ⚠️ 

To animate an addressable LED strip, you need a microcontroller, such as an Arduino board, to generate the data signals that control each LED.

However, the number of LEDs in your project directly affects **memory (RAM) usage.** Each LED requires memory to store its color information, and as the strip becomes longer, this memory demand increases.


**SHORT STRIPS: 10-60 LEDS**

- Arduino UNO

- Arduino Nano, Nano Every, Nano 33 IoT

- Arduino Mega

**LARGE STRIPS**

- [ESP32-S3](https://github.com/kingston-hackSpace/ESP32/edit/main/README.md)

- [ESP32-Feather-V2](https://github.com/kingston-hackSpace/ESP32/edit/main/README.md)

- Arduino Nano ESP32

- [Teensy](https://github.com/kingston-hackSpace/Teensy_4-1)

**MULTIPLE Addressable LED Strips in parallel**

- [Adafruit Feather RP2040 SCORPIO](https://www.adafruit.com/product/5650) 

-----
## Libraries  

If you search for tutorials online, you might run into examples that use the Adafruit_NeoPixel Library or the FastLED Library. Both are suitable to control addressable LEDs Propertly. 

For begginners, we advice to explore programming your LED strip using the [Adafruit_NeoPixel Library](https://github.com/adafruit/Adafruit_NeoPixel).

-----
## Tutorials

Intro to Addressable LED strips: 

Sparkfun examples: [Rainbow Cycle, Candy Chase, Snowflakes, Iceflakes](https://learn.sparkfun.com/tutorials/addressable-led-strip-hookup-guide/all)

Raspberry Pi : [Control an Addressable WS2812B RGB LED Strips with a Raspberry Pi](https://core-electronics.com.au/guides/fully-addressable-rgb-raspberry-pi/)

Youtube tutorial : [BEGINNERS Guide to Individually Addressable RGB LED Programming with Arduino](https://www.youtube.com/watch?v=WS6FI_NyRzs)


----
## Further Learning

Read more about Addressable LED Strip **Types** [here](https://www.superlightingled.com/blog/ultimate-guide-to-choosing-the-right-addressable-led-strip/)

