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





