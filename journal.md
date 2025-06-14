---
title: "Sticktility"
author: "Simon"
description: "A stick with many utilities! (addons)"
created_at: "2024-05-26"
---
 
#May 26: 
I started the concept - I realized the idea and brainstormed the concept of how it would generally come together. I listed what parts I should use, and what I would need. I figured out what capacitors I need, and what board to use. I settled on the adafruit kb2040 since I have a bunch of them laying around, a 128x64 oled for the screen, and I have figured out anything else yet. Im going to challenge myself with board constraints though, to ensure it stays like a stick - 0.91 inch wide (23mm). 


** Total time spent: 1 Hour**

#May 27: 

I decided I should start with pcb work, since everything else is essentially a shell. I found the kb2040 has an adafruit Qwiic connector, which means I could use that as the data transfer tool . not sure yet though. I also worked more on the concept - a rectangular tool, which has devices you can plug in to use. like a pocket sized multimeter, Ai quality sensor, solderer? and much more. you can also charge it with a winder tool, solar panel attachment, or whatever else. I also researched the last parts I should need - I found the d pad that works best is from sparkfun (in BOM), and the usb-c off of digikey (most waterproof one I could find). I also found the battery charger and battery from adafruit - the charger seems packed with features so I dont need to make them in my pcb. I also started on the pcb outline! made the concepts in the schematic editor.

** Total time spent: 3 Hours**

May 28:

Friend told me I need capacitors and resistors so had to do math to figure those out. I added those to the BOM and finished the schematic. I then started to outline the pcb and added the parts in. 80% of the way through, I realized the traces just wouldnt work unless I flipped the battery charger so had to restart. I also found a kicad-wakatime issue that meant it wasnt logging my hours :(

** Total time spent: 2 Hours**

#May 29: 

didnt do much - was busy. Just worked on tracing the new stuff. and found a lot of small inconsistencies in the footprint linking. had to redo most of them. I also added solder pads to the board instead of through hole pins for the on-off switch. (yet to find one that isnt tiny and annoying)

** Total time spent: 1 Hour**

#May 30: 

I tried to finish the PCB. I learned about Via's and I used that to complete the wiring I couldnt figure out at all. I asked chatgpt if I was missing anything and it suggested ground fills, so I had to reasearch how those work and how there helpful. I then tried to clear as many errors as possible, but still stuck on the solder mask problems around the tiny pins on the USB-C. other than that the PCB should be done now though! not gonna print until im sure im not going to make an expensive heater though. I also found I wasnt publishing the journal so just did that.

![Screenshot 2025-05-30 at 6 08 56 PM](https://github.com/user-attachments/assets/8d19ea9e-5798-4703-925f-01eef8e8dcec)
![Screenshot 2025-05-30 at 6 08 46 PM](https://github.com/user-attachments/assets/7641994d-bda6-48e2-b90f-3aa0c3e34070)


** Total time spent: 4 Hours**

#May 31: 

I worked a lot on finding the right screen to use, (TFT vs OLED, are the extra pins worth it?, what power do I need? should I use qwiic?), and I had to change my pcb around to accomodate te new oled. I then found 3d models for each model and used those to make a more accurate visualization of the board. Im now ready to work on the case finally!

![image](https://github.com/user-attachments/assets/3b66380e-714b-4adb-9922-42bd0eb6f7b9)
![image](https://github.com/user-attachments/assets/4cda4002-622f-441d-8c29-7a6ccb107d57)


** Total time spent: 4 hours 31 minutes**

#June 1:

Had to take time off for school but I went back to the pcb and had to make sure it size as effecient as possible. I figured out how to shink it by about 20-25% lengthwise so it is much smaller now. Took a while.

** Total time spent: 4 hours 24 minutes**

#june 2:

I worked on mounting the pcb to the shells. I delevoped a case concept where there are two peices that close on the pcb mounting holes(I also made today). this should make it secure and fit into the outer shell without any movevent. There cut so they slide in perfectly. havent figured out how to clip them into the outer shell yet though.

** Total time spent: 4 hours 21 minutes**

#June 3:

Updated the case design to match the new board and worked on the USB-C mechanism. (since its angled the cap cant just slide to go over it.) I made a cutout on the side, so the cap can encase it as it slides in. working on how to secure the cap now. Ive been working on different latching mechanisms but I want it to be able to come apart easily.

** Total time spent: 4 hours 16 minutes**



June 5:

I spent a while today figuring out how the buttons can work through the case. I decided on having "extenders" reach down to press the buttons, and thin connectors to join them with the case. I added an extender on the inside, and on the outside shell. I also realized I needed supports for the OLED screen, so I used some profiles and extrusions to make small printable pieces to supoprt that, that seamlessly fit into the supports I made for the pcb board. (They all work together structurally now.)

** Total time spent: 5 hours 35 minutes**

June 6:

I figured the best way to go was just with M3 screws and nuts for the cap. I created slots to hold them and secure it together. the cap will join with the upper and lower cage (when there in place), then slide in. I still need to work on:

on/off button
holding the cage to the case
pogo pin concept for the attachments
attachments

** Total time spent: 2 hours 16 minutes**

June 7:

I started on the pogo pin concept for easily attaching attachments. spent a while browsing and landed on one which has magnetics, and reverse polarity protection. I 3d modeled both sides of it and implemented it into the design, and moved over the battery to make space for its wires. turns out my timeline was messed up so the battery took a while to move, while maintaining its cutouts in the top and bottom "cage" (to secure it in place).

** Total time spent: 4 hours 23 minutes**

June 8: 

I started on the button design. turns out I think this project is going to be much smaller than I expected but thats not a problem. I looked into using the usb-c, or an attachment device, to be detected to turn it on, but figured I should have a hardwired button. I found a small enoguh latching button on adafruit im planning on using, I implemented it into the pcb, and I modeled it in Fusion. then added the same cutout style I did with the usb-c to let it slide in.

** Total time spent: 3 hours 53 minutes**

June 9: 

I started on the design to attach the cages to the outer shell. I landed on (hopefully) strong magnets since I really didnt want screws on both ends, or a flimsy 3d printed latch.

** Total time spent: 1 hours 12 minutes**

June 10: 

I started on the external device. I figured a simple sparkfun tempature sensor would be pretty compact and easy to start with. I modeled a cage for it and worked out how it would connect. The magnets on the pogo and on the case will help it stay attached. 

** Total time spent: 1 hours 38 minutes**

June 11:

I figured out how to get my fusion360 files onto github (way too late I know). I did that along with pushing my journal out

** Total time spent:  33 minutes**

June 12:

I first tried to make an "Explosion" animation of my finihsed device to put onto my readme/journal soon. I fixed my BOM to include all the parts on the build, and I started on some other modules. I researched GNSS vs GPS etc.. and I landed on including a GNSS module. Then I came up with another amazing idea of a "Node" - or a secondary device, that can send data to the main device over LoRa. I picked out the parts required for that, and did the schematic, and started on the pcb. I got good progress on the pcb too. called it project "Nodes"

** Total time spent: 5 hours 12 minutes**

June 13:

I looked into the nodes more and built it out. I made the pcb, case, antenna setup, and everything for it. runs on 3.6v AA-like batteries. however I gotta abandon it. I cant send LoRa through Qwiic so thats gonna be my next project - lora radio. I worked on GNSS and made a module tho. I think im done with the builds for this project. in the end I got the base, the GNSS module, and the weather/temperature module. Im going to finalize the BOM, make the ReadMe, add the images if forgot to add, do the firmware ig? and publish.

** Total time spent: 5 hours 31 minutes**