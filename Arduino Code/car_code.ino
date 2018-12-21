#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int fwdPin = 12;
int counter = 0;
int on = 20;
int off = 30;
int i = 0;
int turn_delay = 23;

int reference = 74;

void setup() {
  // put your setup code here, to run once:
  pinMode(fwdPin,OUTPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    myservo.write(reference);                  // sets the servo position according to the scaled value
    delay(1000);    
   /*
    while (counter != 1000){
    digitalWrite(fwdPin,HIGH); // off time
    delay(100);

      if ( reference < 115 && reference >= 74 ){
        reference = reference + 5;
        myservo.write(reference);
      }
      else if (reference > 115 ) {
        reference = 73;
        myservo.write(reference);
      }
      else if ( reference < 74 && reference > 25 ){
        reference = reference - 5;
        myservo.write(reference);
      }
      else if ( reference <= 25 ){
        reference = 74;
        myservo.write(reference);
      }
      
      
      

    Serial.print(reference);
    Serial.print(" ");

      
    digitalWrite(fwdPin,LOW);
    delay(100);
    counter = counter + 1;
    }
    */
    while(i < 200){
    while(reference < 115){
      digitalWrite(fwdPin,HIGH); // off time
      delay(20);
      reference = reference + 5;
      myservo.write(reference);
      Serial.print(reference);
    Serial.print(" ");

      
    digitalWrite(fwdPin,LOW);
    delay(30);
    counter = counter + 1;
    }
    i=0;
    while(i < turn_delay){
      digitalWrite(fwdPin,HIGH); // off time
      delay(20);
      digitalWrite(fwdPin,LOW);
      delay(30);
      i++;
    }
    while(reference > 25){
      digitalWrite(fwdPin,HIGH); // off time
      delay(20);
              reference = reference - 5;
        myservo.write(reference);
        Serial.print(reference);
    Serial.print(" ");

      
    digitalWrite(fwdPin,LOW);
    delay(30);
    counter = counter + 1;
    }
    i=0;
    while(i < turn_delay){
      digitalWrite(fwdPin,HIGH); // off time
      delay(20);
      digitalWrite(fwdPin,LOW);
      delay(30);
      i++;
    }

    while(reference < 115){
      digitalWrite(fwdPin,HIGH); // off time
      delay(20);
      reference = reference + 5;
      myservo.write(reference);
      Serial.print(reference);
    Serial.print(" ");

      
    digitalWrite(fwdPin,LOW);
    delay(30);
    counter = counter + 1;
    }
    /*
    i=0;
    while(i < 30){
      digitalWrite(fwdPin,HIGH); // off time
      delay(20);
      digitalWrite(fwdPin,LOW);
      delay(30);
      i++;
    }
    while(reference > 25){
      digitalWrite(fwdPin,HIGH); // off time
      delay(20);
              reference = reference - 5;
        myservo.write(reference);
        Serial.print(reference);
    Serial.print(" ");

      
    digitalWrite(fwdPin,LOW);
    delay(60);
    counter = counter + 1;
    }
    i=0;
    while(i < 30){
      digitalWrite(fwdPin,HIGH); // off time
      delay(20);
      digitalWrite(fwdPin,LOW);
      delay(30);
      i++;
    }
    */
    }
    
    digitalWrite(fwdPin,HIGH);

    
    
}
