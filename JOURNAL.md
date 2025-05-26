Day 1 - Saturday night into Sunday - 6 hours

This is my first day that I started to work on this project. I wanted to make a device that could measure power draw from a usb-c compatible device. I did a majority of the work on this day. I gathered all the parts that I needed for it which includes a usb-c port obviously ;), a INA226 for power measuring, and it all running on a ATmega328P-A displayed on a OLED screen via II2. I did multiple things in order

- I built the Schematic for it including figuring out how to wire up the INA226 
	[Insert image from github ;)]
	- Also, figured out OLED issues via IIC and the needed crystal (ended up needing to be 16MHZ with 2 22pF caps!)
- Routed 95% of the PCB ;)
	- I spent most of the night (all the way up until 4am!) routing all the traces on my 2 layer PCB. I probably spent close to 2-2.5 hours straight routing it all! My biggest struggle was figuring out how to put it all in a small-ish form factor while all being on the front. Lots of vias later- I got it mostly done for the night.
	[Insert image of vias from github!]

For the rest of Sunday, I didn't continue to work on this as I had other projects to work on 👀. 
