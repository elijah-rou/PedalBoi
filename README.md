# PedalBoi
A guitar pedal powered by the [Electrosmith Daisy](https://www.electro-smith.com/daisy/daisy) microcontroller platform. The goal is to have a fully programmable pedal that can be customised with any effect via digital signal processing. The programmed effect is currently a distortion, hard clipping the input.

## Usage
Compile PedalBoi
```makefile
make
```

Upload binary to Daisy
```makefile
make program-dfu
```

## Build of Materials and Schematic
For a detailed build of core materials, consult this [document](bom.pdf).

Any enclosure may be used, such the [aluminium console](https://www.digikey.com/en/products/detail/lmb-heeger-inc/MDC752-PLAIN/1738) which was chosen for the initial prototype.
### Circuit Schematic
The schematic was created in [Fritzing](https://fritzing.org). 
![PedalBoi Circuit Schematic](fritzing/PedalBoi_Schematic.png)

## Major components

### Input Buffer
<img src="media/Input_Buffer_Circuit.jpg" alt="drawing" width="400"/>

### Output Buffer
<img src="media/Output_Buffer_Circuit.jpg" alt="drawing" width="400"/>

### Enclosure
<img src="media/Enclosure_Crossection.jpg" alt="drawing" width="400"/>
<img src="media/PedalBoi_Enclosure+BreadBoard.jpg" alt="drawing" width="400"/>

## Final Build
<img src="media/PedalBoi_Inside.jpg" alt="drawing" width="400"/>
<img src="media/PedalBoi_PoC_v1.jpg" alt="drawing" width="400"/>

## Oscilloscope Breadboard Demo
[![Osc Demo](https://img.youtube.com/vi/5Jb7ozU0aHI/0.jpg)](https://youtu.be/5Jb7ozU0aHI "Oscilloscope Demo")

## PedalBoi_v1 Demo:
[![v1 Demo](https://img.youtube.com/vi/re2_l2MvA74/0.jpg)](https://youtu.be/re2_l2MvA74 "PedalBoi_v1 Demo") 