# Basic Addressable LED Strip Example
---
## DESCRIPTION

---
## HARDWARE

- Arduino UNO

- Any addressable LED strip (lengh: 16 LEDs total)

- 5V 1.5A Power Supply (correct current is crutial!)

---
## POWERING

In this tutorial, we will use a total of 16 LEDs in an LED strip. 
Each LED draws ~60mA, multiplied by 16 gives us a total of ~960mA. However, you should always add powering range to avoid problems. 
You will need a 5V 1.5A power supply (or higher current).

---
## WIRING

IMPORTANT! Addressable LED strips have a directional order. 
See [this image] to wire properly. 


| LED Strip | Arduino |
|----------|---------|
| 5V+      | 5V      |
| GND      | GND     |
| DIN      | Pin 13  |

--- 
## CODE and INSTRUCTIONS
