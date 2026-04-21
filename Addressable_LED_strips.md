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

-----
## Arduino? Or another microcontroller? ⚠️ 

To animate an addressable LED strip, you need a microcontroller, such as an Arduino board, to generate the data signals that control each LED.

However, the number of LEDs in your project directly affects **memory (RAM) usage.** Each LED requires memory to store its color information, and as the strip becomes longer, this memory demand increases.

For short LED strips (for example, 10–100 LEDs), an Arduino Uno or Nano is generally sufficient and widely used in prototyping and teaching contexts.
As projects scale up—using hundreds of LEDs, multiple strips, or more complex animation logic—the limited RAM of entry‑level Arduino boards can become a constraint. In these cases, microcontrollers with greater memory capacity, such as the ESP32, are a more appropriate choice.
Importantly, this limitation is not about processing speed, but about how much data the controller can store and manage reliably.


# SHORT STRIPS: 10-60 LEDS

- Arduino UNO

- Arduino Nano, Nano Every, Nano 33 IoT

- Arduino Mega

# LARGE STRIPS

- ESP32-S3

- ESP32 HUZZAH32

- Arduino Nano ESP32

- Teensy

# MULTIPLE Addressable LED Strips in parallel

- [Adafruit Feather RP2040 SCORPIO](https://www.adafruit.com/product/5650) 



-----
## Tutorials

Sparkfun General Guide [here](https://learn.sparkfun.com/tutorials/addressable-led-strip-hookup-guide/all)

Different types [here](https://learn.adafruit.com/adafruit-neopixel-uberguide/the-magic-of-neopixels)

Multiple Addressable LED strips with SPARTA

