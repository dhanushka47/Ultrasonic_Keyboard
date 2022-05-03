 void setUp_Details(){
  //sensor1
  pinMode(trigPin1, OUTPUT);                     // Sets the trigPin as an OUTPUT
  pinMode(echoPin1, INPUT);                      // Sets the echoPin as an INPUT
  //sensor2
  pinMode(trigPin2, OUTPUT);                     // Sets the trigPin as an OUTPUT
  pinMode(echoPin2, INPUT);                      // Sets the echoPin as an INPUT
  
                            // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
  
  }
