//This code correspond to the used in long time lapse recording using the Arduino Uno for control UV and Blue syncronization time-dependant with the camera
//Transfer to Arduino Uno

int led = 13;//Blue led
int led2= 12;//UV led
int Camera = 11;//Camera input
unsigned long minutes=60000;
// the setup routine runs once when you press reset:
void setup(){               
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(Camera, OUTPUT);
}

void loop() 
{
   while (minutes*2<millis() and millis()<minutes * (2.3)) { 
    digitalWrite(Camera, HIGH);
    delay(0.00877);//this corresponds to the delay of the camera to start
    digitalWrite(led, HIGH);// turn the LED on (HIGH is the voltage level)}
    digitalWrite(Camera, LOW);
    delay(90);//this should correspond to the exposure +11 ms
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);//this corresponds to the delay of the camera to start
    digitalWrite(led2, HIGH);// turn the LED on (HIGH is the voltage level)}
    digitalWrite(Camera, LOW);
    delay(90);//this should correspond to the exposure +11 ms
    digitalWrite(led2, LOW);
  }
while (minutes*2.3<millis()and millis() < minutes * 3){ //dont sent an input to camera or leds
//turn off the set up by the time specified
  }
  while (minutes*3<millis() and millis()<minutes * (3.3)) { 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
while (minutes*3.3<millis()and millis() < minutes * 4){ 

  }
while (minutes*4<millis() and millis()< minutes * 4.3){ 
     
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*4.3<millis() and millis()< minutes * 5){ 
  }
  while (minutes*5<millis() and millis()< minutes * 5.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*5.3<millis() and millis()< minutes * 6){ 
    //turn stuff off
  }
  while (minutes*6<millis() and millis()< minutes * 6.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*6.3<millis() and millis()< minutes * 8){ 
    //turn stuff off
  }
  while (minutes*8<millis() and millis()< minutes * 8.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90); 
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*8.3<millis() and millis()< minutes * 10){ 
    //turn stuff off
  }
  while (minutes*10<millis() and millis()< minutes * 10.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90); 
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
   while (minutes*10.3<millis() and millis()< minutes *12 ){ 
    //turn stuff off
  }
  while (minutes*12<millis() and millis()< minutes * 12.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90); 
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
   while (minutes*12.3<millis() and millis()< minutes *14 ){ 
    //turn stuff off
  }
  while (minutes*14<millis() and millis()< minutes * 14.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90); 
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*14.3<millis() and millis()< minutes *16 ){ 
    //turn stuff off
   }
  while (minutes*16<millis() and millis()< minutes * 16.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*16.3<millis() and millis()< minutes *18 ){ 
    //turn stuff off
       }
  while (minutes*18<millis() and millis()< minutes * 18.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*18.3<millis() and millis()< minutes *20 ){ 
    //turn stuff off
  }
  while (minutes*20<millis() and millis()< minutes * 20.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90); 
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*20.3<millis() and millis()< minutes *22 ){ 
    //turn stuff off
   }
  while (minutes*22<millis() and millis()< minutes * 22.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*22.3<millis() and millis()< minutes *24 ){ 
    //turn stuff off
  }
  while (minutes*24<millis() and millis()< minutes * 24.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*24.3<millis() and millis()< minutes *26 ){ 
    //turn stuff off
  }
  while (minutes*26<millis() and millis()< minutes * 26.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*26.3<millis() and millis()< minutes *28 ){ 
    //turn stuff off
    }
  while (minutes*28<millis() and millis()< minutes * 28.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(Camera, LOW);
    digitalWrite(led, HIGH);
    delay(90); 
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(Camera, LOW);
    digitalWrite(led2, HIGH);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*28.3<millis() and millis()< minutes *30 ){ 
    //turn stuff off
  }
  while (minutes*30<millis() and millis()< minutes * 30.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90); 
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
  while (minutes*30.3<millis() and millis()< minutes *32 ){ 
    //turn stuff off
  }
  while (minutes*32<millis() and millis()< minutes * 32.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
   while (minutes*32.3<millis() and millis()< minutes *34 ){ 
    //turn stuff off
    }
  while (minutes*34<millis() and millis()< minutes * 34.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);//
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);//
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
   while (minutes*34.3<millis() and millis()< minutes *36 ){ 
    //turn stuff off
  }
  while (minutes*36<millis() and millis()< minutes * 36.3){ 
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);
    digitalWrite(led2, HIGH);
    digitalWrite(Camera, LOW);
    delay(90);
    digitalWrite(led2, LOW);
  }
   while (minutes*36.3<millis() and millis()< minutes *48 ){ //x minutes is off
    //turn stuff off
   }
}
