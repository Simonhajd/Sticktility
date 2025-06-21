Slick_Tility - 


About the Project:

When I was thinking of a project to create for Highway, I started by constraining myself to one of these four categories: Tools, displays, Devices, and Interfaces. I wanted to restrict myself to making a tool, since I wanted to be able to use it outside of testing. I couldnt decide what I could made that wasnt already out there, and thats when I decided on making the most compact tool possible. I came up with a few more contraints (handheld, battery powered), and started developing the tool. since the size of the battery and pcb made it in a stick-shape, I landed on the name sticktility. I then came up with the parts I would need to have this be a functional tool, such as a usb-c, power management board, lipo battery, and screen. This was my second time designing a pcb so it took a while. I also spent a while making it about 25% smaller than before.

![Screenshot 2025-06-21 at 3 33 17 PM](https://github.com/user-attachments/assets/0e7c6074-bc5e-4a1c-abf8-2c45742fb986)

![Screenshot 2025-06-21 at 3 33 07 PM](https://github.com/user-attachments/assets/4534ad2a-98f1-4759-94d9-f0aff7cf5f34)


I moved to the case and I tried to develop it in a way where it wouldnt be permanently sealed shut, and could be taken apart for debugging/removal, and for a more dynamic setup. I came up with the concept of two "skeleton" parts I can slide over the PCB and battery to keep them in place, and a shell which I can slide the electronics into. after many tens of hours of work on the case, I came up with a design that should be very robust, as small as possible, and easy to use. I also have magnets to attach the additional components, and to snap the skeletons into the shell.

![Screenshot 2025-06-21 at 3 21 40 PM](https://github.com/user-attachments/assets/d139e1ac-d05e-41a8-bf24-13c0a1ff0086)

I created an explosion video of the model too to visualize the parts required on the build:

https://github.com/user-attachments/assets/41e0f8f3-01ee-4bec-a7f7-713455e94a45

Why:

I wanted to be able to use tools and sensors for cheaper - and this device removes the computer and battery aspect of each individual tool and sensor, so you can simply plug in the sensor (with pogo pins, like a macbook charger), aand you will recieve data. this means, for each sensor youd like to use, you just need the sensor mechanism, (with i2c), and you just plug it in. one battery for everything. I also made the kb2040 flashable through the usb-c port on the outside, and I made it charge the battery through it too. This means you can have a robust sensor device for whatever youd like, that fits in your hand, and is quick-disconnectable.
