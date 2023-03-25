#define trigPin 7 //connect trigger pin of ultrasonic sensor to D7 of Arduino
#define echoPin 8 //connect echo pin of ultrasonic sensor to D8 of Arduino
int redLed=10;
int yellowLed=11;
int greenLed=12;
int buzzer=13;
// connect 3 leds and buzzer to digital pins of Arduino.
long duration; 
long distance; 
// declare variables to hold duration and distance.
void setup() //setup() is used for initialization
{
Serial.begin(9600); //set the baud rate of serial communication to 9600
pinMode(trigPin,OUTPUT); //set trigPin as output pin of Arduino
pinMode(echoPin,INPUT); //set echoPin as output pin of Arduino
pinMode(redLed,OUTPUT);
pinMode(yellowLed,OUTPUT);
pinMode(greenLed,OUTPUT);
pinMode(buzzer,OUTPUT); //set all 3 leds and buzzer as output pins of Arduino
}
void loop(){
digitalWrite(trigPin,LOW); //generate square wave at trigger pin
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=340*duration/20000; 
// pulseIn is used to Reads a pulse (either HIGH or LOW) on a pin.
//For example, if value is HIGH, pulseIn() waits for the pin to 
// go HIGH, starts timing, then waits for the pin to go LOW and stops timing.
//Returns the length of the pulse in microseconds and distance in cm.
delay(500);
if (distance>=0 && distance<3 ){ // Case 1: Tank is full.  
digitalWrite(greenLed,HIGH);
digitalWrite(yellowLed,LOW);
digitalWrite(redLed,LOW);
digitalWrite(buzzer,LOW);
Serial.println("The tank is full.");
delay(500);
} else if(distance>=3 && distance<6) { // Case 2: Tank is half-full.
digitalWrite(yellowLed,HIGH);
digitalWrite(greenLed,LOW);
digitalWrite(redLed,LOW);
digitalWrite(buzzer,LOW);
Serial.println("The tank is half-full.");
delay(500);
} else if(distance>=6 && distance<=9) { // Case 3: Tank is empty.
digitalWrite(redLed,HIGH);
digitalWrite(yellowLed,LOW);
digitalWrite(greenLed,LOW);
tone(buzzer,100);
delay(500);
noTone(buzzer);
delay(20);
Serial.println("The tank is empty.");
delay(500);
} else if (distance>10) { // Case 4: The sensor is not attached to a tank.
digitalWrite(redLed,LOW);
digitalWrite(yellowLed,LOW);
digitalWrite(greenLed,LOW);
noTone(buzzer);
Serial.println("The sensor is not attached to a tank.");
delay (500);
}
delay(500);
}
