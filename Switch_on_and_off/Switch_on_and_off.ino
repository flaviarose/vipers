/*VIPERS */
int ledPin = 1;	// LED is connected to d
int switchPin = 2;	// switch connected to digital pin 2
int switchPushCount = 0;	// counter for presses
int switchState = 0; //current state of button
int lastSwitchState = 0; //previous state of button

void setup()	 
{	 
  pinMode(ledPin, OUTPUT);	// sets the ledPin to be an output
  pinMode(switchPin, INPUT);	// sets the switchPin to be an input
  digitalWrite(switchPin, HIGH);	// sets the default (unpressed) state of switchPin to HIGH
}	 

void loop()	// run over and over again
{	 
  switchState = digitalRead(switchPin);	// check to see if the switch is pressed
  
  
  if(switchState != lastSwitchState){   // compare the switchState to its previous state
    if(switchState == HIGH){  // if the state has changed, increment the counter
     switchPushCount++;  // if the current state is HIGH then the switch went from off to on
    }
    else {
    }
    delay(50);  // Delay a little bit to avoid bouncing
  }
  lastSwitchState = switchState;   // save the current state as the last state, for next time through the loop
  
  
    // turns on the LED every 2 button pushes by
  // checking the modulo of the button push counter.
  // the modulo function gives you the remainder of
  // the division of two numbers:
  if(switchPushCount %2 == 0){
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);
  }
}
    
    
