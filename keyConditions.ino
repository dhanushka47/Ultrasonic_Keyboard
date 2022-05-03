
void keyConditions(){

if ((distanceSen1>=s1s) && (distanceSen2>=s2s)){
 
 
 if(distanceSen1>=s11 || distanceSen2>=s21){
   Serial.println("0");
  // Keyboard.write('0');             //remove comment
   delay(2000);
  } 
 if((distanceSen1>=s12) || (distanceSen2>=s22)){
   Serial.println("1");
  // Keyboard.write('1');            //remove comment
    delay(2000);
  } 
 if((distanceSen1>=s13) || (distanceSen2>=s23)){
   Serial.println("2"); 
  // Keyboard.write('2');            //remove comment
    delay(2000);
  }
 if((distanceSen1>=s14) || (distanceSen2>=s24)){
   Serial.println("3");
 //  Keyboard.write('3');            //remove comment
    delay(2000);
  } 
 if((distanceSen1>=s15) || (distanceSen2>=s25)){
   Serial.println("4");
  // Keyboard.write('4');            //remove comment
    delay(2000);
  } 
 if((distanceSen1>=s16) || (distanceSen2>=s26)){
   Serial.println("5");
  // Keyboard.write('5');            //remove comment
    delay(2000);
  }  
 if((distanceSen1>=s17) || (distanceSen2>=s27)){
   Serial.println("6");
  // Keyboard.write('6');            //remove comment
    delay(2000);
  } 
 if((distanceSen1>=s18) || (distanceSen2>=s28)){
   Serial.println("7");
  // Keyboard.write('7');            //remove comment
    delay(2000);
  } 
 if((distanceSen1>=s19) || (distanceSen2>=s29)){
   Serial.println("8");
 //  Keyboard.write('8');            //remove comment
    delay(2000);
  }
 if((distanceSen1>=s1b) || (distanceSen2>=s2b)){
   Serial.println("9");
 //  Keyboard.write('9');            //remove comment
    delay(2000);
  } 
 if((distanceSen1>=s1e) || (distanceSen2>=s2e)){
   Serial.println("Back Space");
  // Keyboard.write('d');            //remove comment
    delay(2000);
  } 
}
else {
  Serial.println("Waiting");

    }
}
