## Powdy

Powdy is an all-in-one power reader via USB-C! Just plug it in to your device, and watch as the power draw reading come onto the OLED screen. This device mostly uses one main component to read the power- The INA226, along with the MCU- the ATmega328P-A.

## BOM
| Item Name        | Purpose in Project                        | Source                   | Item Price (incl. shipping + taxes) | Total Price |
|------------------|--------------------------------------------|---------------------------|--------------------------------------|-------------|
| USB-C   | What connects to the device to read the power output             | JLC - C165948          | $0.84                               | $0.84      |
| OLED| For displaying the reading           | Amazon                   | $7.93                               | $7.93      |
| Caps and Resistors x 14| For everything             | JLC         | $0.29                               | $0.29      |
| 2x03 Pin Header| For programming | Digikey - 61300411121                 | $0.34                                | $0.34       |
| INA226 | the actual IC to measure the power going through the USB-C port                     | JLC - C2653835                 | $9.3                                | $9.3       |
| AMS1117-3.3 | Voltage regulator to 3.3V from 5V for stuff like OLED and some INA226 pins                    | JLC - C6186                   | $0.89                                | $0.89       |
| ATmega328P-A | The Main MCU                     | JLC - C14877                     | $11                                | $11       |
| Crystal | For the MCU | Digi - ABM3-16.000MHZ-B2-T                 | $0.9                               | $0.9      |
| USBtinyISP| The board to program the MCU via the 6 header pins | Amazon                 | $1                               | $11      |
**Total**        - **$43 Before Tax In Parts**
**Total** - **$117 After Everything including assembly + pcb + tax and shipping**

## Photos

![image](https://github.com/user-attachments/assets/6c7cd621-9f36-42a8-ae05-8c37f37fe347)
![image](https://github.com/user-attachments/assets/10684a08-9ad4-4437-85b0-b346d00b1456)
