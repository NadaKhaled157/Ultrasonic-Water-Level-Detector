# Ultrasonic Water Level Detector
## Table of Contents
* Project Overview
* Application Idea
* Parameters
* Components
* Schematic Diagram
* Hardware Implementation
* Team Members
## Project Overview
A water-level detector using an ultrasonic sensor. The sensor is fixed above our tank and can detect water level based on the time it takes for a wave to reflect off of the water's surface. This project is done under the scope of Medical Physics course.
## Application Idea
<p align="justify"> Monitoring fluid levels, especially water is a detrimental task in medical institutes such as
hospitals and clinics. Fluids that are attached to patients and medical machines must always be
monitored to ensure continuous supply and avoid unwanted complications. The water level
indicator using ultrasonic sensor is an application of the acoustic device to help determine the
levels of water in a certain container, and signals output that declares the current water level in
cm. The ultrasonic sensor, connected to the Arduino, is attached above the water filled. It has
two transducers, one that transmits a wave and one that receives it back as it’s reflected from the
water surface. The time the wave took to go out and back is calculated by the sensor, and since
the velocity is constant, we can do a simple calculation to get the distance between the sensor
and the water level. Furthermore, output is connected to three light bulbs, each with its own
signal queue for low, medium, and high water supply, depending on the distance between the
sensor and the water level. When the water supply becomes low, the buzzer starts ringing to alert
staff to refill the tank. </p>

## Parameters 
The table below shows the parameters related to the ultrasonic signal that the sensor transmits
and their corresponding values for the sensor version we are using, which is HC-SRO4.
| Operating Frequency | 40 kHz | 
| --------------------|--------|
| Minimum Range| 2 cm |
| Maximum Range | 400 cm |
| Range Accuracy | Up to 3 mm | 
## Components
* Arduino Uno
* Ultrasonic Sensor HC-SR04
* Red Led
* Yellow Led
* Green Led
* Buzzer
* Male to Male Jumper Wires
* Male to Female Jumper Wires
## Schematic Diagram
![Schematic Diagram using Wokwi](https://user-images.githubusercontent.com/124778473/227718803-efeba451-cef9-4ee7-b075-4e7b28a61aab.jpg)
## Hardware Implementation
![image](https://user-images.githubusercontent.com/124778473/227718706-9533399a-d642-4085-b5bb-f5aff1dac82e.png)
![image](https://user-images.githubusercontent.com/124778473/227718776-f8dd40bc-ce4a-4708-8456-5eb262c47fed.png)
## Team Members
* Nada Khaled 
* Nariman Ahmed
* Malak Emad
