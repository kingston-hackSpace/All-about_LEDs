# Guide: How to power your RGBW non-addressable LED Strip

------
### Calculating Voltage and Current

Besides programming your strip with a micro-controller, you will need to power the strip with an independent Power Supply.

Micro-controllers such as Arduino cannot provide enough current to power devices such as motors or LED strips. For this reason, a **Power Supply is mandatory!**

When choosing a Power Supply you need to look at **Voltage and Current** (amperage).

Your hackSpace kit includes a **12V strip of 21 LEDs (7 segments)**. 

This means that you need a 12V Power Supply, while *current* will vary depending on the number of LEDs in your strip. 

**WARNING!** You can overheat the strip and **cause a fire** if you are not providing enough current.   

Current is measured in amperes (A).

Each segment of 3 LEDs draws approximately 20 milliAmperes from a 12V supply, per string of LEDs. So for each segment, there is a maximum 20mA draw from the red LEDs, 20mA draw from the green and 20mA from the blue. If you have the LED strip on **full white (all LEDs lit) that would be 60mA per segment.**

If we multiply 60 x 7 (number of LEDS in our strip) = ~420mA. 

This means you need a power supply that can provide at least 500mA (0.5A) as a bare minimum to avoid fire hazards.

You should always add powering range to avoid problems. Use a **12V 1A** power supply (or higher current) for your 12V RGBW non-addressable LED strip of 21 LEDs (7 segments). 

FOR LONGER STRIPS, ASK A TECHNICIAN. 
