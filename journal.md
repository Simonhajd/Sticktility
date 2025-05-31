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



#May 29: 

didnt do much - was busy. Just worked on tracing the new stuff. and found a lot of small inconsistencies in the footprint linking. had to redo most of them. I also added solder pads to the board instead of through hole pins for the on-off switch. (yet to find one that isnt tiny and annoying)

** Total time spent: 1 Hour**

#May 30: 

I tried to finish the PCB. I learned about Via's and I used that to complete the wiring I couldnt figure out at all. I asked chatgpt if I was missing anything and it suggested ground fills, so I had to reasearch how those work and how there helpful. I then tried to clear as many errors as possible, but still stuck on the solder mask problems around the tiny pins on the USB-C. other than that the PCB should be done now though! not gonna print until im sure im not going to make an expensive heater though. I also found I wasnt publishing the journal so just did that.

![Screenshot 2025-05-30 at 6 08 56 PM](https://github.com/user-attachments/assets/8d19ea9e-5798-4703-925f-01eef8e8dcec)
![Screenshot 2025-05-30 at 6 08 46 PM](https://github.com/user-attachments/assets/7641994d-bda6-48e2-b90f-3aa0c3e34070)


** Total time spent: 4 Hours**

#May 31: 

I worked a lot on finding the right screen to use, (TFT vs OLED, are the extra pins worth it?, what power do i need? should i use qwiic?), and i had to change my pcb around to accomodate te new oled. i then found 3d models for each model and used those to make a more accurate visualization of the board. Im now ready to work on the case finally!

![image](https://github.com/user-attachments/assets/3b66380e-714b-4adb-9922-42bd0eb6f7b9)
![image](https://github.com/user-attachments/assets/4cda4002-622f-441d-8c29-7a6ccb107d57)


** Total time spent: 3 hours 30 minutes**
