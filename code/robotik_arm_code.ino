#include <SoftwareSerial.h>  //including the library for using the bluetooth module

#include <Servo.h>           //including the librabry for using the servos

Servo smallservo;            //defying all the servos
Servo bigservo1;             *
Servo bigservo2;             //
                   // the stepper motor is missing

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
      pos0 = pos0 + 10;           *    //basically, if I send the letter A, then small servo opens a little
      Servo1.write(pos0);         *    //bit the clamp
      delay(30);                  *     //if I send the letter B, the clamp will close a bit
    }                             *

    if (bluetooth=="B"){          *
      pos0 = pos0 - 10;           *
      Servo1.write(pos0);         *
      delay(30);                  *
    }                             //

    if (bluetooth=="C"){         //not so sure about this part, maybe for the bigger servo you need to
      pos1 = pos1 + 10;          //attach and dettach them each time you move them!
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

    // Missing part to control the stepper motor :(
    *
    *
    *
    *
    *
    //

  }
}
