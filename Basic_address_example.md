# Basic Addressable LED Strip Example
---
## DESCRIPTION

---
## HARDWARE

- Arduino UNO

- Any addressable LED strip (lengh: 16 LEDs total)

- 5V 2A Power Supply (correct current is crutial!)

- 1000 µF capacitor (6.3V or higher). The capacitor buffers sudden changes in the current drawn by the strip.

-  300 to 500 Ohm resistor 

---
## POWERING

In this tutorial, we will use a total of 16 LEDs in an LED strip. 
Each LED draws ~60mA, multiplied by 16 gives us a total of ~960mA. However, you should always add powering range to avoid problems. 
You will need a 5V 1.5A power supply (or higher current).

---
## WIRING

**IMPORTANT!** Addressable LED strips have a directional order. 

**WARNING!** Capacitors have polarity (one lead is positive and the other negative). See [this image](https://github.com/kingston-hackSpace/All-about_LEDs/blob/main/capacitor-polarity.webp)

See [this image](https://github.com/kingston-hackSpace/All-about_LEDs/blob/main/Address_arrow.png) to wire properly. 

| Connections | |
|----------|---------|
| Power Supply: Negative  (black) wire  (-)  | Arduino: GND     |
| Power Supply: Positive (red) wire (+) | Strip: 5V (red) wire    |
| Strip: Negative (black) wire     | Arduino: GND     |
| Strip: DIN (green) wire (via resistor)     | Arduino: pin 6  |
| Capacitor + lead      |  Negative  (black) wire  (-) |
| Capacitor - lead      |  Positive (red) wire (+)|

See [wiring reference here](https://github.com/kingston-hackSpace/All-about_LEDs/blob/main/address_wiring.png)

--- 
## CODE and INSTRUCTIONS

- Install **Adafruit_NeoPixel Library**. See [instructions here](https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-installation)

- Power your Arduino board ONLY AFTER you finished the wiring (if re-wiring, ALWAYS disconnect from power first)

- Download [this code](https://github.com/kingston-hackSpace/All-about_LEDs/blob/main/Basic_Addressable_Example.ino) and upload it into your Arduino Board. 
