# Buran-Ortho
A 39-key orthogonal keyboard with support for two knobs. 

Used License :: [Cern Open hardware](/LICENSE)

---

![](/images/banner_pcb.JPG)

## Status :: 
- Rev 3 released
- Case options were updated accordingly 
- untested LED-Pinout 

---

## Features :: 
- PCB supports MX, Alps and Choc v1 switches  
- QMK and Vial Support
- built with rp2040 and additional flash storage allowing for plenty of combos, layers, led matrices etc.
- easy to order with jlcpcb --> check release for files 
- support up to two encoders 
- additional pinouts for further modifications 
- - technically could fit an OLED or some other additional parts
- gasket mounted case
- case designed for 3d printing 
- several layout-options for middle part.

## Layout :: 
Below all possible layouts can be observed. All the observed layouts can be choosen and used with Vial or Qmk 

![](/images/layout_options.png)


## Case :: 
All files for the case are to be found [here](/case/). 

For the top-part of the case there are several options available, where each of them was designed for a specific layout. 


## Firmware :: 

the pre-compiled file for Vial and the whole Qmk-userspace for this keyboard can be found [here](/firmware/)

To enter the bootloader - which is necessary in order to flash a new firmware - press the button next to the encoder on the back of the pcb and plug-it into your keyboard while keeping the button pressed. It should show up as a regular usb-stick in your file explorer now and you can drag the .utf onto this usb-stick. Once done it will restart and use your newly flashed firmware!

--- 

## Building your own :: 

On the verge to build this keyboard your own?
Below you can find a little guideline on what is required and how to obtain everything: 

### Getting PCBs ::
in the directory **production** you can find both the gerber and POS-Files required for assembly. 
I usually use JLCPCB for my prototypes, the procedure should be fairly similiar for other manufacturers however, and they require the gerber_buran_pcb.zip and for assembly of all SMD-components also their positions (buran-pos-bottom.csv) and the BOM (buran-BOM.csv) all of which can be found in the **production/assembly** directory. 

### Building Case :: 
The case consists of three parts: the bottom-part, top-part (various layouts available) and the plate. 
Print all of them yourself or have someone print them for your (JLCPCB also offers MFJ printing which could be used (**althought untested!**)).
Now to assemble the case you further need:
| Part | Quantity |
|------|----------|
|2mm thick foam to use as gasket| 14x cut pieces | 
| 20mm M3 | 8x | 

> The length for the Gasket can be taken from the existing cutouts in the case 

As alternative one could also replace the screws with small 3mm diameter magnets. 

### Building the board ::
1. Prepare your pcb accordingly. 
2. Further add the plate and position your switches with them, later solder them to the pcb. 
3. add any feature, like LEDS or knobs. 
4. add **the cut foam** to each lip of the plate. It ought to be positioned both at the top and bottom of the plate --> to isolate properly from the rest of the case!
5. Position everything and screw the case together. 
6. Run Vial on your system and configure the keyboard accordingly 

## Images of Case :: 

Case-option for additional acrylic : 

![](/images/buran-acryl.jpg)

![](/images/buran-back.jpg)

Case-option without additoinal buttons in the middle : 

![](/images/buran-no-acryl-isp.jpg) 
Image by Isp 

Case-option with an alternative bottom design :
![](/images/alternative_bottom.jpg)
Design and Image by DeadCatAlive

## Images of PCB :: 

![](/images/pcb_front.JPG)

![](/images/pcb_back.JPG)





