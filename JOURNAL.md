**Day 1 - Saturday night into Sunday - 6 hours**

This is my first day that I started to work on this project. I wanted to make a device that could measure power draw from a usb-c compatible device. I did a majority of the work on this day. I gathered all the parts that I needed for it which includes a usb-c port obviously ;), a INA226 for power measuring, and it all running on a ATmega328P-A displayed on a OLED screen via II2. I did multiple things in order

- I built the Schematic for it including figuring out how to wire up the INA226 
	![image](https://github.com/user-attachments/assets/f7163909-1b2f-4002-9c7b-0d89f6d9c554)
	- Also, figured out OLED issues via IIC and the needed crystal (ended up needing to be 16MHZ with 2 22pF caps!)
- Routed 95% of the PCB ;)
	- I spent most of the night (all the way up until 4am!) routing all the traces on my 2 layer PCB. I probably spent close to 2-2.5 hours straight routing it all! My biggest struggle was figuring out how to put it all in a small-ish form factor while all being on the front. Lots of vias later- I got it mostly done for the night.
	![image](https://github.com/user-attachments/assets/6a02f0ba-caf6-4710-a3ec-714e458d5d5d)

For the rest of Sunday, I didn't continue to work on this as I had other projects to work on 👀. 

**Day 2 - Monday - 3.5 hours**

Today was mostly just double checking everything, and making sure there were no issues (Suprise! There were a few that I fixed, like SMD pin headers 🤦‍♂️, and OLED footprints). Next I pretty much was on a mission to find all the nessecary components for my BOM- which was super annoying especially for the Crystal as there was none I could buy off of LCSC (I need to buy it from Digikey :().
