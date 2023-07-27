const int speedcontrol = A0;
const int pin1 = A1;
const int pin2 = A2;
const int pin3 = A3;
const int pin4 = A4;
const int pin5 = A5;


int i;

// Constants for motor control
int motorl= 7;
  int motorr = 5;
   int motorPinpwm = 6;


  int motorspeed = 0;
    

// Variables to store the motor run time
  


void setup() {

    pinMode(pin1, INPUT_PULLUP);
    pinMode(pin2, INPUT_PULLUP);
    pinMode(pin3, INPUT_PULLUP);
    pinMode(pin4, INPUT_PULLUP);
    pinMode(pin5, INPUT_PULLUP);


 
  // Set motor pin as output
  pinMode(motorr, OUTPUT);
   pinMode(motorl, OUTPUT);
  pinMode(motorPinpwm, OUTPUT);


 //  pinMode(pin, INPUT);

  Serial.begin(9600);
}

    

void loop() {





int sw1 = digitalRead(pin1);
int sw2 = digitalRead(pin2);
int sw3 = digitalRead(pin3);
int sw4 = digitalRead(pin4);
int sw5 = digitalRead(pin5);


if (sw1 == LOW) {

 i=0;

  while ( i<6 ) {

motorspeed = analogRead(speedcontrol);

motorspeed = map(motorspeed, 0, 1023, 0, 255);

     Serial.println("motor run");
    digitalWrite(motorr, HIGH);
    digitalWrite(motorl, LOW);
     analogWrite(motorPinpwm, motorspeed);
       delay(300000);
       Serial.println("motor run stop");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);
           delay(120000);
           Serial.println("motor run l");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, HIGH);
     analogWrite(motorPinpwm, motorspeed);
        delay(300000);
        Serial.println("motor run stop2");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);

     Serial.println(i);
     delay(120000);

     i=i+1;
     
     }

      return 0;     
  }


if (sw2 == LOW) {

 i=0;

  while ( i<18 ) {

motorspeed = analogRead(speedcontrol);

motorspeed = map(motorspeed, 0, 1023, 0, 255);

     Serial.println("motor run");
    digitalWrite(motorr, HIGH);
    digitalWrite(motorl, LOW);
     analogWrite(motorPinpwm, motorspeed);
       delay(300000);
       Serial.println("motor run stop");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);
           delay(120000);
           Serial.println("motor run l");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, HIGH);
     analogWrite(motorPinpwm, motorspeed);
        delay(300000);
        Serial.println("motor run stop2");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);

     Serial.println(i);
     delay(120000);

     i=i+1;
     
     }

      return 0;   
  }



if (sw3 == LOW) {

 i=0;

  while ( i<36 ) {

motorspeed = analogRead(speedcontrol);

motorspeed = map(motorspeed, 0, 1023, 0, 255);

     Serial.println("motor run");
    digitalWrite(motorr, HIGH);
    digitalWrite(motorl, LOW);
     analogWrite(motorPinpwm, motorspeed);
       delay(300000);
       Serial.println("motor run stop");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);
           delay(120000);
           Serial.println("motor run l");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, HIGH);
     analogWrite(motorPinpwm, motorspeed);
        delay(300000);
        Serial.println("motor run stop2");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);

     Serial.println(i);
     delay(120000);

     i=i+1;
     
     }

      return 0;      
  }



if (sw4 == LOW) {

 i=0;

  while ( i<72 ) {

motorspeed = analogRead(speedcontrol);

motorspeed = map(motorspeed, 0, 1023, 0, 255);

     Serial.println("motor run");
    digitalWrite(motorr, HIGH);
    digitalWrite(motorl, LOW);
     analogWrite(motorPinpwm, motorspeed);
       delay(300000);
       Serial.println("motor run stop");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);
           delay(120000);
           Serial.println("motor run l");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, HIGH);
     analogWrite(motorPinpwm, motorspeed);
        delay(300000);
        Serial.println("motor run stop2");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);

     Serial.println(i);
     delay(120000);

     i=i+1;
     
     }

      return 0;    
  }


if (sw5 == LOW) {

 i=0;

  while ( i<144 ) {

motorspeed = analogRead(speedcontrol);

motorspeed = map(motorspeed, 0, 1023, 0, 255);

     Serial.println("motor run");
    digitalWrite(motorr, HIGH);
    digitalWrite(motorl, LOW);
     analogWrite(motorPinpwm, motorspeed);
       delay(300000);
       Serial.println("motor run stop");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);
           delay(120000);
           Serial.println("motor run l");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, HIGH);
     analogWrite(motorPinpwm, motorspeed);
        delay(300000);
        Serial.println("motor run stop2");
    digitalWrite(motorr, LOW);
    digitalWrite(motorl, LOW);
     digitalWrite(motorPinpwm, LOW);

     Serial.println(i);
     delay(120000);

     i=i+1;
     
     }

      return 0;    
  }

 
}