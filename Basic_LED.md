# Basic LED (~20mA)

The following tutorial covers *standard LED type ONLY* (reference image)(https://github.com/kingston-hackSpace/All-about_LEDs/blob/main/StandardLED_referenceImage.png).

Further learning: 

[All about LEDs by Adafruit](https://learn.adafruit.com/all-about-leds)

[All about LEDs by SparkFun](https://www.sparkfun.com/leds)

---
### Tutorials
[Arduino Blink tutorial](https://www.build-electronic-circuits.com/arduino-blink-led/)

[Dimming an LED with Arduino and a Potentiometer](https://roboticsbackend.com/arduino-control-led-brightness-with-a-potentiometer/)

---
## Powering LEDs (no micro-controllers)

LEDs are current-driven devices, incorrect current (and voltage) can burn/damage the LED.

**A single LED typically draws ~20 mA**. Your circuit should allow the LED to draw the current it requires, while limiting that current using resistors or other components.

*Note: If using the appropriate resistors, there is no need for an LED driver* 

---

**CASE 1: Powering 1-LED**

- 3V coin cell (alkaline):  

  - You don't need a resistor. Coin cells have high internal resistance. The LED positive lead should only touch battery positive side, while the negative lead should touch its negative side. See [reference image here](https://github.com/kingston-hackSpace/All-about_LEDs/blob/main/coinCell_LED.png). 

- Two AA batteries (alkaline)

  - Use a 100Ω resistor

- 9V battery (alkaline)

  - Use a 330Ω or 390Ω resistor

- 5V Power Supply

  - Use a 220Ω resistor
 
- 12V Power Supply

  - Use a 470Ω to 560Ω resistor

[Reference image: wiring a LED + resistor + battery/PS](https://github.com/kingston-hackSpace/All-about_LEDs/blob/main/BasicLED_batteries_bb.jpg)
 

---
**CASE 2: Powering multiple LEDs**

LEDs can be wired in *series or parallel.* 


When LEDs are connected *in parallel*:

- Voltage stays the same

- Total current increases

- Each LED must have its own resistor


When LEDs are connected *in series*:

- Voltages add

- Current stays the same

- The supply voltage must be higher than the total LED voltage


////////////////////////////////////

**Ohms Law**

Resistance (ohms) = Voltage (Volts) / LED Current (Amps)

R = V / I

Note: V = (Supply Voltage − LED Forward Voltage)

////////////////////////////////////

Example: LEDs in Parallel

Power Source : 5V Power Supply

Number of LEDs : 3 LEDs in parallel (voltage remains the same, add current)

Ohms Law : 
  
R = (V supply − V LED) / LED Current

R = (5V − 3V) / 0.02A

R = 100Ω

**Use a 5V PS + *three* 120ohms (margin up) resistor (one resistor per LED)**
