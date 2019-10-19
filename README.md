# Activity Tracker

This is a project to make a desktop activity tracker to follow a goal. 
The concept is that it sits on your desk and you can select a light to tun it on and off if you complete your goal on that day.

It is made of a 5x7 grid of LEDs and two buttons to program it. And to control all this stuff I have attached an arduino nano.

Bill of Materials

| Item | Amount |
| ---- | ---- |
| 5x7cm Perfboard | 1 |
| 3mm LED | 35 |
| 100 ohm resistor | 5 |
| 10mm Push button | 2 |
| Random Resistor | 1 |
| Broken Ethernet Cable | 1 |

Electronics Diagram

I have two buttons (one at A0 and another at A1) however the way they are wired only one button can be pressed at a time. 
This was a design decision because having hte ability to accidently press both buttons at once made for interesting issues. 
There will be no need to press two at once so I will save the resistor. 

The Prototype

I build a small 3x3 matrix with two buttons to test the code and matrix logic.

![Prototype Example](/images/Prototype.gif)

Diagram

![Prototype Diagram](/images/MatrixPrototypeWireing.png)

