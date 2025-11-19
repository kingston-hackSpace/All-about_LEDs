# RGB_LED (anode type)

Description
---
This tutorial covers how to use an RGB LED **anode type**.

Read more about RGB LEDs here: 

https://www.circuitbread.com/tutorials/how-rgb-leds-work-and-how-to-control-color  

---
Hardware
---
- Arduino UNO
- 220 ohms resistors (x3)
- RGB LED (anode type)

---
Wiring
---
| LED Pin (Left → Right) | LED Function     | Arduino Connection                    |
| ---------------------- | ---------------- | ------------------------------------- |
| **Left pin**           | Red cathode      | **Pin 6 → 220 Ω resistor → LED pin**  |
| **Second left (long)** | **Common anode** | **+5V**                               |
| **Second right**       | Green cathode    | **Pin 9 → 220 Ω resistor → LED pin**  |
| **Right pin**          | Blue cathode     | **Pin 10 → 220 Ω resistor → LED pin** |


Wiring image reference: 
https://github.com/kingston-hackSpace/RGB_LED/blob/main/RGB_LED_bb.jpg 

---
Code
---
***Important Note***

This LED is common-anode, meaning:

  - analogWrite(pin, 0) → colour fully ON

  - analogWrite(pin, 255) → colour OFF

Download code here: 

https://github.com/kingston-hackSpace/RGB_LED/blob/main/RGB_LED.ino

