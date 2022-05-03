#include <Keyboard.h>

      // ultrasonic sensor 1
#define echoPin1 2 
#define trigPin1 3 
      // ultrasonic sensor 2
#define echoPin2 4 
#define trigPin2 5 

      // define key ranges
      //sensor 1
#define s1s 3.71
#define s11 5.64
#define s12 7.48
#define s13 10.98
#define s14 11.30
#define s15 15.70
#define s16 18.60
#define s17 20.70
#define s18 22.40
#define s19 25.0
#define s1b 27.5
#define s1e 30.6

      //sensor 2
#define s2s 29.99
#define s21 27.20
#define s22 25.10
#define s23 22.60
#define s24 20.70
#define s25 18.26
#define s26 15.60
#define s27 13.20
#define s28 10.64
#define s29 8.14
#define s2b 5.50
#define s2e 3.30



// defines variables
  
  float distanceSen1; 
  float distanceSen2; 

void setup() {
 Serial.begin(9600); 
 Keyboard.begin();
 setUp_Details();
 
 
}
void loop() {

distanceSen1 = distanceSen_1();
distanceSen2 = distanceSen_2();

keyConditions();

delay(1000); 
  
}
