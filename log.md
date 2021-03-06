## 13/11
Received initial components to prototype with.

This includes:
+ [Electrosmith Daisy Seed](https://www.electro-smith.com/daisy/daisy) 
+ Aluminium Console
+ [MCP6002-I/P-ND General Purpose OpAmp for input buffering](https://www.digikey.com/en/products/detail/microchip-technology/MCP6002-I-P/500875?s=N4IgTCBcDaILIGEAKA2ADGsBaAkgeiSwDkAREAXQF8g)
+ [NJM4580D-ND Audio OpAmp for output buffering](https://www.digikey.com/en/products/detail/njr-corporation-njrc/NJM4580D/673772?s=N4IgTCBcDaIHICkCyAWArADgAwBEC0cOIAugL5A)
+ [2 1/4" audio jacks (2223-SJ-63062B-ND)](https://www.digikey.com/en/products/detail/cui-devices/SJ-63062B/13155750?s=N4IgTCBcDa5mBmAtAZQFJIGwIAybAEJIByAIiALoC%2BQA)

The initial plan is to build a simple circuit with OpAmps, the jacks and the 5V power supply I have, and have audio simply pass through the Daisy board. The next step will be to program an effect.

## 22/11
Designed initial simple prototype. Simply takes in an audio signal and outputs the same signal. See `prototype_1.asc` for sim.
![PedalBoi Schematic v1](pedalboi_v1.png)

## 25/11
Refined the initial circuit. Coded distortion effect on Daisy and uploaded it to the board (See `PedalBoi.cpp`). 
Built out breadboard prototype.

## 28/11 - 29/11
Changed effect to temporarily be in-out passthrough. Tested Initial breadboard prototype. 
There is a hum that I *can not* seem to locate the source of, though the guitar signal gets through the daisy. 
Modularised the breadboard prototype for debugging.

## 02/12
Swapped out AC power adapter for a 9V battery. This has eliminated most of the AC noise.
Added a resistor from output circuit to ground -> Eliminates the ground loop when the circuit is off.
Added a capacitor to the 2nd op amp output of the input circuit to attempt to eliminate stray DC input.