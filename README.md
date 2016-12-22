# 3x3x3 LEDCube Instructions

##What you need
- [1x Arduino Board] (https://www.arduino.cc/en/Main/ArduinoBoardUno)
- [1x Breadboard] (https://www.amazon.com/Phantom-YoYo-Points-Breadboard-Arduino/dp/B016Q6T7Q4/ref=sr_1_4?ie=UTF8&qid=1482383570&sr=8-4&keywords=mini+breadboard)
- 1x White Project Board / Cardboard
- [1x USB to USB-B] (https://www.monoprice.com/product?p_id=5436)
- [1x Scotch Tape Pad] (https://www.amazon.com/Scotch-Permanent-Mounting-Tape-Inches/dp/B00347A8GC/ref=sr_1_1?ie=UTF8&qid=1482383745&sr=8-1&keywords=scotch+tape+foam)
- [3x ~1in Black Wires] (https://www.amazon.com/Solderless-Flexible-Breadboard-Jumper-Wires/dp/B005TZJ0AM/ref=sr_1_3?ie=UTF8&qid=1482383803&sr=8-3&keywords=breadboard+jumper+wires)
- [3x 2N2222 Transistors (Black)] (https://www.amazon.com/2N2222-Plastic-Encapsulate-Power-Transistors-600mA/dp/B00R1M3DA4/ref=sr_1_1?ie=UTF8&qid=1482383860&sr=8-1&keywords=2N2222)
- [3x ~3-5in Wires] (https://www.amazon.com/Solderless-Flexible-Breadboard-Jumper-Wires/dp/B005TZJ0AM/ref=sr_1_3?ie=UTF8&qid=1482383803&sr=8-3&keywords=breadboard+jumper+wires)
- [9x ~3in Long Wires] (https://www.amazon.com/Solderless-Flexible-Breadboard-Jumper-Wires/dp/B005TZJ0AM/ref=sr_1_3?ie=UTF8&qid=1482383803&sr=8-3&keywords=breadboard+jumper+wires)
- [9x 100 Ohm Resistors] (https://www.amazon.com/E-Projects-100EP514100R-100-Resistors-Pack/dp/B00AVSDYFO/ref=sr_1_2?ie=UTF8&qid=1467169375&sr=8-2&keywords=100+ohm+resistor)
- [9x ~1-3in Wires] (https://www.amazon.com/Solderless-Flexible-Breadboard-Jumper-Wires/dp/B005TZJ0AM/ref=sr_1_3?ie=UTF8&qid=1482383803&sr=8-3&keywords=breadboard+jumper+wires)
- [27x LEDs] (https://www.adafruit.com/?q=led%203%20mm&p=1&gclid=CjwKEAiA7ejCBRDlp8uF6ezPnjoSJAAPED7MpuYy9beeJjQQUNoKLtj7MatFf8T-pO-tJkxHAekNWhoClwPw_wcB)

##Tools
- Tools Required:
- Soldering Iron
- Solder
- Tweezers / Pliers (Optional but recommended)

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
Start wiring up the led cube to the breadboard and arduino following the schematic below. I like lining up all the resistors and transistors first. Place them on a breadboard, as shown in the schematic. I like briding them over the gap, with jumper cables on both sides. Then once all the components are in place, start soldering jumper cables to the bottom anodes of the LEDs, then to the breadboard, as shown. Then wire up the resistors back to the arduino, then move on to the transistors. Finally use the sticky pad to stick the arduino to the project board and sticky underneath the breadboard to connect it to the project board.

Note: The resistors aren't polarized (it doesn't matter which direction they're going) but transistors are. When doing the transistors (they're the black thing) make sure that the flat side is facing where N is on the schematic, otherwise it won't work. 

![img5](/images/img5.png "")

##Step 5
Now that all the wiring is complete, you can start on coding it. Go to https://www.arduino.cc/en/Main/Software and download the Arduino IDE for your OS. Install it, and open it up. Go ahead and plug in your arduino with a USB to USB-B cord. Open up the Arduino IDE and go to Tools > Board > Arduino/Genuino Uno to make sure that it knows what Arduino board its programming. Then, take the code from the ledcube.ino on this website and paste it into the IDE. At the top right, click Upload. 

###Thats it! You've successfully assembled a 3x3x3 Arduino LED Cube! Congratulations! :-)



##Note
[Some pictures used in these instructions are from this website.](http://www.instructables.com/id/Making-an-Arduino-3X3-LED-Cube-in-Less-Than-30-Min/?ALLSTEPS)
