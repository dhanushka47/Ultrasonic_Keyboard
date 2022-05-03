
//sensor1
float distanceSen_2(){
  float senRead =0;
  float senDuration =0;
    // Clears the trigPin condition
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
                                                    // Reads the echoPin, returns the sound wave travel time in microseconds
senDuration = pulseIn(echoPin2, HIGH);
senRead = (float)senDuration * 0.034 / 2;        // Speed of sound wave divided by 2 (go and back)
return senRead;
  }
