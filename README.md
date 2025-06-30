Stick-Tility - 

## About the Project:

Stick-Tility is a compact handheld device that powers and reads data from snap-on sensor modules. Once a sensor is connected, it can record data at set time intervals and graph the data on its screen. It can charge via the USB-C on the side, and the KB2040 Microcontroller can be updated or connected to a computer using the same usb-c port. This all fits in a durable case smaller than a TV remote.


## My process:
When I was thinking of a project to create for Highway, I started by constraining myself to one of these four categories: Tools, displays, Devices, and Interfaces. I wanted to restrict myself to making a tool, since I wanted to be able to use it outside of testing. I decided on making the most compact tool possible. I came up with a few more contraints (handheld, battery powered), and started developing the tool. 

### Why:

I wanted to be able to use sensors more easily without wiring or breadboards. This device removes the bulky computer and battery aspect of each individual tool and sensor, so you can simply snap on the sensor (with pogo pins, like a macbook charger), and you will recieve data. This means, for each sensor you would like to use, you just need the sensor, (with i2c), and you just plug it in using a pogo system. One battery for everything. This means you can have a robust sensor device for whatever you'd like, that fits in your hand, with a hot-swappable sensor which stays on using just magnets and pins. 




![Screenshot 2025-06-21 at 3 33 17 PM](https://github.com/user-attachments/assets/0e7c6074-bc5e-4a1c-abf8-2c45742fb986)

![Screenshot 2025-06-21 at 3 33 07 PM](https://github.com/user-attachments/assets/4534ad2a-98f1-4759-94d9-f0aff7cf5f34)

## Case design process:

I designed the case to be easily taken apart for debugging/removal while still sitting solidly together. I came up with the concept of two "skeleton" parts I can slide over the PCB and battery to keep them in place, and a shell which I can slide the electronics into. after many tens of hours of work on the case, I came up with a design that should be very robust, as small as possible, and easy to use. I also have magnets to attach the additional components, and to snap the skeletons into the shell.

![Screenshot 2025-06-21 at 3 21 40 PM](https://github.com/user-attachments/assets/d139e1ac-d05e-41a8-bf24-13c0a1ff0086)

I created an explosion video of the model too to visualize the parts required on the build:

https://github.com/user-attachments/assets/41e0f8f3-01ee-4bec-a7f7-713455e94a45




### Past projects: 
The only PCB work I’ve done before is a single-layer PCB macropad. https://github.com/Simonhajd/Macropad. Ive done some cad practice but no projects. This was mostly the first time ive really challenged myself with CAD. Other than these, I have only done software/online work.

### Why this is worth 10 points: 
This isnt just a data reading device, this is a dynamic tool which can be easily programmed to compile data and visualize it, or record data over time. the device is allowed to be placed anywhere, start a recording, and log data every x hours. This product has the ability to be a part of a much larger ecosystem of tools and sensors. The intricate build of this case allows anything to be modularly swapped, and nothing is glued. There are so many parts which fit so seamlessly together to become one rigid device. Just two screws are used, and everything is held together by other objects, or magnets. The PCB contains two off-the-shelf boards, and many other features to optimize reliability and quality. Such as decoupling capacitors, data line tuning, and much more. And finally, roughly 67 hours were spent on this project.


### Total Hours spent: 66 Hours 33 Minutes

### Total price: $158.44

## BOM:


| Qty | Part | P/N | Supplier | Price | Link | Shipping + Tariffs | Tax | Total |
|-----|------|-----|----------|-------|------|---------------------|-----|-------|
| 1 | Adafruit PowerBoost 1000 Charger - Rechargeable 5V Lipo USB Boost @ 1A - 1000C | N/A | Adafruit | 19.95 | [Link](https://www.adafruit.com/product/2465) | 1.72 | 2.167 | 23.837 |
| 1 | On-Off Power Button / Pushbutton Toggle Switch | 1683 | Adafruit | 1.95 | [Link](https://www.adafruit.com/product/1683?gQT=1) | 1.92 | 0.387 | 4.257 |
| 1 | Adafruit KB2040 | 5302 | Adafruit | 8.95 | [Link](https://www.adafruit.com/product/5302) | 1.92 | 1.087 | 0 (own) |
| 1 | 2A Waterproof Magnetic Pogo Pin Connector (Male/Female) | N/A | Aliexpress | 13.38 | [Link](https://www.aliexpress.us/item/3256808648425959.html) | 0 | 1.338 | 14.718 |
| 1 | Gravity: GNSS GPS BeiDou Positioning Module with RTC - I2C&UART | DFR1103 | DFRobot | 17.9 | [Link](https://www.dfrobot.com/product-2815.html) | 15 | 3.29 | 36.19 |
| 1 | 128x64 OLED - SSD1306 - I2C | WEA012864DWPP3N00003 | Digikey | 9.53 | [Link](https://www.digikey.com/en/products/detail/winstar-display/WEA012864DWPP3N00003/20533255) | 1.208 | 1.0738 | 11.8118 |
| 1 | Decoupling Capacitor | C0402C104K9RACTU | Digikey | 0.1 | [Link](https://www.digikey.com/en/products/detail/kemet/c0402c104k9ractu/1090777) | 1.208 | 0.1308 | 1.4388 |
| 2 | 5.1kΩ Resistors | RC0603FR-075K1L | Digikey | 0.1 | [Link](https://www.digikey.com/en/products/detail/yageo/RC0603FR-075K1L/727268?s=N4IgTCBcDaIEoGEAMA2JBmAYnAtEg7AKwDSAjADIgC6AvkA) | 1.208 | 0.1308 | 1.4388 |
| 11 | 1mΩ Resistors | TLR3AWDTE2L00F | Digikey | 1.53 | [Link](https://www.digikey.com/en/products/detail/koa-speer-electronics-inc/tlr3awdte2l00f/9845546) | 1.208 | 0.2738 | 3.0118 |
| 1 | USB-C Connector | UJ31-CH-G-SMT-TR-67 | Digikey | 3.52 | [Link](https://www.digikey.com/en/products/detail/same-sky-formerly-cui-devices/UJ31-CH-G-SMT-TR-67/12702600) | 1.208 | 0.4728 | 5.2008 |
| 100 | Screw x2 | 90128A187 | McMaster-Carr | 8.41 | [Link](https://www.mcmaster.com/catalog/131/3561/90128A187) | 3.61 | 1.202 | 0 (own) |
| 1 | 2.40mm M3 Hex Nut x2 | 90591A250 | McMaster-Carr | 2.81 | [Link](https://www.mcmaster.com/catalog/131/3648/90591A250) | 3.61 | 0.642 | 0 (own) |
| 8 | Magnets (Disc OD 0.197) | 5902K47 | McMaster-Carr | 1.09 | [Link](https://www.mcmaster.com/products/magnets/magnets-2~/shape~disc/od~0-197/) | 3.61 | 0.47 | 5.17 |
| 1 | Adafruit Lithium Ion Cylindrical Battery - 3.7V 2200mAh | 1781 | Adafruit | 9.95 | [Link](https://www.adafruit.com/product/1781) | 1.92 | 1.187 | 13.057 |
| 1 | Sparkfun Multi-Directional Switch 5 Position - D-Pad (SMD) | COM-26850 | Sparkfun | 0.95 | [Link](https://www.sparkfun.com/multi-directional-switch-5-position-d-pad-smd.html) | 2.825 | 0.3775 | 4.1525 |
| 1 | Flexible Qwiic Cable - 200mm | PRT-17258 | Sparkfun | 1.95 | [Link](https://www.sparkfun.com/flexible-qwiic-cable-200mm.html) | 2.825 | 0.4775 | 5.2525 |
| 1 | Qwiic Cable - 100mm (cut in half) | PRT-14427 | Sparkfun | 1.5 | [Link](https://www.sparkfun.com/qwiic-cable-100mm.html) | 2.825 | 0.4325 | 4.7575 |
| 1 | SparkFun Micro Temperature Sensor | STTS22H | Sparkfun | 8.53 | [Link](https://www.sparkfun.com/sparkfun-micro-temperature-sensor-stts22h-qwiic.html) | 2.825 | 1.1355 | 12.4905 |
| 1 | PCB | N/A | JLCPCB | 2.1 | PCB in repo | 8.5 | 1.06 | 11.66 |
