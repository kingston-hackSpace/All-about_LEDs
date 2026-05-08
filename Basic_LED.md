# Basic LED (~20mA)

Learn more about [LEDs] here

---
### Tutorials
[Arduino Blink tutorial](https://www.build-electronic-circuits.com/arduino-blink-led/)

[Dimming an LED with Arduino and a Potentiometer](https://roboticsbackend.com/arduino-control-led-brightness-with-a-potentiometer/)

---
## Powering LEDs (no micro-controllers)

LEDs are current-driven devices, incorrect current (and voltage) can burn/damage the LED.

**One singular LEDs draw ~20mA**. Your circuit should provide as much as current the LED requires, but prevent current spikes using resistors and other components. 

*Note: If using the appropriate resistors, there is no need for an LED driver –only about this type of LEDs* 

---
### Ohms Law

Voltage = Current x Resistance
V = I x R

This formula is key to calculate how to power your LEDs.

---

**CASE 1: Using batteries**

- 3V coin cell (alkaline):  

- Two AA batteries (alkaline) 

- 9V battery (alkaline) 
---
**CASE 2: Using a 5V power supply + resistors**

---
**CASE 3: LEDs in parallel**

