# Robotik_Arm
## 🤔 What's this and why?
This was a _**school project**_ made by Sami and Yashveen and we are freshmen. We wanted to do something interesting and hard at the same time (but not something impossible neither!). We like anything that can be remote controlled, so we got the idea of a robotic arm. We knew that it would not be easy to either build (create the 3D pieces, find the right mechanical solutions and also to actually assembling the whole thing) and to code it (and manage all the different motors at the same time).

We chose it, we stuck with it and we tried our best!

## 🔎 Quick overview
<img src="https://github.com/Sami7754/Robotik_Arm/blob/main/pictures/overview.png">

## ✏️ The 3D modeling
We costum made every single part of this arm. It was certainly not easy but it was the easier part of the project for sure. 

A few examples here :

<img src="https://github.com/Sami7754/Robotik_Arm/blob/main/pictures/ex1.png" width="300">

<img src="https://github.com/Sami7754/Robotik_Arm/blob/main/pictures/ex2.png" width="300">

Probably the biggest problem we had to face was to keep the arm clamp horizontal. We had to "double" the mechanical system and have a "dead weight" keeping it straight :

<img src="https://github.com/Sami7754/Robotik_Arm/blob/main/pictures/sketch.png" width="300">

## 🧶 The wiring
We had a very big problem here : not enough power for the two big servos and the 360 rotor. In fact, we realized that the Arduino cannot deliver enough for everyone. Plus, coding with your pc while having the those big servos wired in, can cause a few problems to the pc!!! Yashveen's pc was completely fried and died after trying to code the big servos (we think that they need a resistance of at least 1500 Ohm, we don't suggest to wire them directly to the board and board to the pc or maybe we just had malfunctionning motors!).


<img src="https://github.com/Sami7754/Robotik_Arm/blob/main/pictures/wiring.png">

## 💻 The coding
```
#include <SoftwareSerial.h>  //including the library for using the bluetooth module

#include <Servo.h>           //including the librabry for using the servos

Servo smallservo;            //defying all the servos
Servo bigservo1;             *
Servo bigservo2;             //

char bluetooth;              //the variable where the message received by the module will be stored

int pos0 = 90;               //the initial position of each servos, useful for also incrementing 
int pos1 = 40;               //the position of the servos on each click
int pos2 = 60;               //

void setup() {
  Serial.begin(9600);       //setting up the band width of the bluetooth module
  smallservo.attach(3);     //attaching each servo and putting them in their initial position
  smallservo.write(90);     *
  bigservo1.attach(5);      *
  bigservo1.write(40);      *
  bigservo1.attach(6);      *
  bigservo1.write(60);      //
  
}


void loop() {
  if (Serial.available()){        //if the bluetooth module receives soemthing from the pc
    bluetooth=Serial.read();      //and it's actually working, then we can control the servos
    Serial.println(bluetooth);    //also printing what the module is receiving, just to check
  

    if (bluetooth=="A"){          //this part works and was largely tested!
      pos0 = pos0 + 10;           *    //basically, if I send the letter A, then small servo opens
      Servo1.write(pos0);         *    //a little bit the clamp
      delay(30);                  *     //if I send the letter B, the clamp will close a bit
    }                             *

    if (bluetooth=="B"){          *
      pos0 = pos0 - 10;           *
      Servo1.write(pos0);         *
      delay(30);                  *
    }                             //

    if (bluetooth=="C"){         //not so sure about this part, maybe for the bigger servo you need
      pos1 = pos1 + 10;          //to attach and dettach them each time you move them!
      Servo1.write(pos1);        *    
      delay(30);                 *
    }                            *

    if (bluetooth=="D"){         *
      pos1 = pos1 - 10;          *
      Servo1.write(pos1);        *
      delay(30);                 *
    }                            *

    if (bluetooth=="E"){         *
      pos2 = pos2 + 10;          *
      Servo1.write(pos2);        *
      delay(30);                 *
    }                            *

    if (bluetooth=="F"){         *
      pos2 = pos2 - 10;          *
      Servo1.write(pos2);        *
      delay(30);                 *
    }                            //
  }
}
```

## 💭 Final thoughts
<img src="https://github.com/Sami7754/Robotik_Arm/blob/main/pictures/pic1.png" width="500">

<img src="https://github.com/Sami7754/Robotik_Arm/blob/main/pictures/pic2.png" width="500">

At the end, we only managed to make work the clamp. The robot fully assembled looks pretty good. We are looking towards making it fully functional one day.

You are free to use anything from this Github if you want to remplicate or finish it.

:)
