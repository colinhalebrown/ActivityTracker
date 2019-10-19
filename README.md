# Activity Tracker

This is a project to make a desktop activity tracker to follow a goal. 
The concept is that it sits on your desk and you can select a light to tun it on and off if you complete your goal on that day.

It is made of a 5x7 grid of LEDs and two buttons to program it. And to control all this stuff I have attached an arduino nano.

## Bill of Materials

| Item | Amount | Link |
| ---- | ---- | ---- |
| 5x7cm Perfboard | 1 | [Here](https://www.addicore.com/5x7-Perfboard-p/ad253.htm) |
| 3mm LED | 35 | [Here](https://www.amazon.com/gp/product/B07HDYFPSX/ref=ppx_yo_dt_b_asin_title_o00_s00) |
| 100 ohm resistor | 5 | [Here](https://www.addicore.com/100-Ohm-1-4W-Metal-Film-Precision-Resistor-p/r26100s.htm) |
| 6mm Push button | 2 | [Here](https://www.addicore.com/Small-6x6x5mm-Tact-Mini-Push-Button-Switch-p/140.htm) |
| Random Resistor | 1 | Garbage |
| Broken Ethernet Cable | 1 | Garbage |
| Female Pin accepter (15 long) | 2 | Garbage |
| Arduino Nano | 1 | [Here](https://www.addicore.com/Nano-3p0-p/239.htm) |

## Electronics Diagram

![Prototype Diagram](/images/MatrixDiagram.png)

I have two buttons (one at A0 and another at A1) however the way they are wired only one button can be pressed at a time. 
This was a design decision because having hte ability to accidently press both buttons at once made for interesting issues. 
There will be no need to press two at once so I will save the resistor. 

## Assembly

I started by testing all my components because after this is all put together I dont want to have to take it appart. 
(Free/ super cheap elecetronics are not always the highest quality. *Crazy how that happens*)

LED Tests

Button Tests


## The Prototype

I build a small 3x3 matrix with two buttons to test the code and matrix logic.

![Prototype Example](/images/Prototype.gif)

Diagram

![Prototype Diagram](/images/PrototypeDiagram.png)

