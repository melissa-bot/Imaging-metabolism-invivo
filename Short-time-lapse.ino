int led = 13;// Blue led
int led2= 12;//UV led
int Camera = 11;// Camera

// the setup routine runs once when you press reset:
void setup(){               
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(Camera, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() 
{
    digitalWrite(Camera, HIGH);
    delay(0.00877);//this corresponds to the delay of the camera to start
    digitalWrite(led, HIGH);// turn the LED on (HIGH is the voltage level)}
    digitalWrite(Camera, LOW);
    delay(60);//this should correspond to the exposure +10-12 ms
    digitalWrite(led, LOW);
    digitalWrite(Camera, HIGH);
    delay(0.00877);//this corresponds to the delay of the camera to start
    digitalWrite(led2, HIGH);// turn the LED on (HIGH is the voltage level)}
    digitalWrite(Camera, LOW);
    delay(60);//this should correspond to the exposure +10-12 ms
    digitalWrite(led2, LOW);
}
