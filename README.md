# 3x3x3 LEDCube Instructions

##What you need
- 1x Arduino Board
- 1x Breadboard
- 1x White Project Board
- 1x USB to USB-B
- 1x Scotch Tape Pad
- 3x ~1in Black Wires
- 3x 2N2222 Transistors (Black)
- 3x 3x3 LED Sheets
- 3x ~3-5in Wires
- 9x ~3in Long Wires
- 9x 100 Ohm Resistors
- 9x ~1-3in Wires
- 27x LEDs

##Tools
- Tools Required:
- Soldering Iron
- Solder
- Tweezers / Pliers
- Hot Glue Gun

##Step 1
The first step is to make a mold with any old cardboard you have laying around. This will help you layout your leds and keep them aligned as they should be. Just get a pencil, and poke 9 holes in your cardboard as big as your led. They should be a bit less than the length of the smallest leg (of your led) apart. Like so:

![img1](/images/img1.png "")

##Step 2
Now bend all the short legs (cathodes), and place them in the mold so they're all touching each other, like shown in the picture:

![img2](/images/img2.png "")

Solder all the legs together but make sure they don't touch the anode (longer leg). If you have tweezers, you can use them to hold the legs together while you solder. They'll make your life much easier! :-)
Do this process 3 times for a total of 3 3x3 led sheets

![img3](/images/img3.png "")

##Step 3
Place a sheet of leds upside down in the mold, then start soldering the anodes together (the long legs). Sometimes bending the anodes slightly can help when soldering them together. Do this for the final layer so you will have a 3x3x3 led cube.

![img4](/images/img4.png "")

##Step 4
Start wiring up the led cube to the breadboard and arduino following the schematic below. I like lining up all the resistors and transistors first. Place them on a breadboard, as shown in the schematic. I like briding them over the gap, with jumper cables on both sides. Then once all the components are in place, start soldering jumper cables to the bottom anodes of the LEDs, then to the breadboard, as shown. Then wire up the resistors back to the arduino, then move on to the transistors. 
Note: The resistors aren't polarized (it doesn't matter which direction they're going) but Transistors are. When doing the transistors (they're the black thing) make sure that the flat side is facing where N is on the schematic, otherwise it won't work. 

![img5](/images/img5.png "")

##Step 5
Now that all the wiring is complete, you can start on coding it. Go to https://www.arduino.cc/en/Main/Software and download the Arduino IDE for your OS. Install it, and open it up. Go ahead and plug in your arduino with a USB to USB-B cord. Open up the Arduino IDE and go to Tools > Board > Arduino/Genuino Uno to make sure that it knows what Arduino board its programming. Then, take the code from the /ledcube.ino on this website and paste it into the IDE. At the top right, click Upload. 

###Thats it! You've successfully assembled a 3x3x3 Arduino LED Cube! Congratulations! :-)
