# Guide: How to power your addressable LED Strip

------
### Calculating Voltage and Current

Besides programming your strip with a micro-controller, you will need to power the strip with an independent Power Supply.

Micro-controllers such as Arduino cannot provide enough current to power devices such as motors or LED strips. For this reason, a **Power Supply is mandatory!**

When choosing a Power Supply you need to look at **Voltage and Current** (amperage).

Your hackSpace kit includes a **NeoPixel 5V strip of 16 LEDs**. 

This means that you need a 5V Power Supply, while *current* will vary depending on the number of LEDs in your strip. 

**WARNING!** You can overheat the strip and **cause a fire** if you are not providing enough current.   

Current is measured in amperes (A).

Each LED can draw up to ~60mA (if the three RGB channels are on to create white).

If we multiply 60 x 16 (number of LEDS in our strip) = ~960mA. 

This means you need a power supply that can provide at least 1000mA (1A) as a bare minimum to avoid fire hazards.

You should always add powering range to avoid problems. Use a **5V 1.5A** power supply (or higher current) for your Neopixel 5V LED strip of 16 LEDs. 

FOR LONGER STRIPS, ASK A TECHNICIAN. 
