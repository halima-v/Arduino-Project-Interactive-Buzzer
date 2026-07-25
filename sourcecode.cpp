/*
  Arduino Project - Interactive Buzzer
  Using a potentiometer to change the sound of the buzzer
  Jessica Guan and Halima Vohidova
  Mr. So
  November 11, 2025
*/

int buzzerPin = 3; //assign an integer variable to the buzzer pin
int potentiometerPin = A0; //assign an integer variable to the potentiometer pin
int pinValue; //assign an integer variable to the value of the potentiometer
float normalA = 440.00; //assign a decimal number as the middle octave note A
float normalB = 493.88; //assign a decimal number as the middle octave note B
float normalC = 261.63; //assign a decimal number as the middle octave note C
float highC = 523.25; //assign a decimal number as the fifth octave note C
float normalD = 293.66; //assign a decimal number as the middle octave note D
float highD = 587.33; //assign a decimal number as the fifth octave note D
float normalE = 329.63; //assign a decimal number as the middle octave note E
float normalF = 349.23; //assign a decimal number as the middle octave note F
float normalG = 392.00; //assign a decimal number as the middle octave note G
float highG = 784.00; //assign a decimal number as the fifth octave note G
int waitTime = 1; //assign a delay time for stability
int printWait = 1000; //assign a short delay time for the serial monitor

void setup() {
  pinMode(potentiometerPin, INPUT); //set potentiometer pin as an input
  pinMode(buzzerPin, OUTPUT); //set buzzer pin as an output
  Serial.begin(9600); //connect arduino port to the 9600 Baud Rate 
}

void loop() {
  pinValue = analogRead(potentiometerPin); //read the analog input value of the potentiometer
  Serial.print("Value: " ); //print the text in the serial monitor
  Serial.print(pinValue); //print the potentiometer value in the serial monitor
  Serial.print(". Buzzer is playing "); //print the text in the serial monitor
  delay(printWait); //delay the printing speed for a short amount of ms

  if (pinValue < 95) { //check the value of the potentiometer pin to see if it is below the given number
    Serial.println("no note."); //display no note playing on the buzzer and move to the next line
  }
  if (pinValue >= 95 and pinValue <= 119)  { //check the value of the potentiometer pin to see if it is 
   //between the given range
    tone(buzzerPin, normalG); //play a frequency of middle note G at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note G."); //display the middle note G playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 120 and pinValue <= 135)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    noTone(buzzerPin); //stop the sound from the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("no note."); //display no note playing on the buzzer and move to the next line
  }
  if (pinValue >= 136  and pinValue <= 163) { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalG); //play a frequency of middle note G at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note G."); //display the middle note G playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 164 and pinValue <= 201)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalA); //play a frequency of middle note A at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note A."); //display the middle note A playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 202 and pinValue <= 239)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalG); //play a frequency of middle note G at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note G."); //display the middle note G playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 240 and pinValue <= 277)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, highC); //play a frequency of high note C at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("high note C."); //display the high note C playing on the buzzer and move to the 
      //next line
  }
  if (pinValue >= 278 and pinValue <= 315)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalB); //play a frequency of normal note B at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note B."); //display the middle note B playing on the buzzer and move to the 
  //next line
  }


  if (pinValue >= 316 and pinValue <= 346)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalG); //play a frequency of middle note G at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note G."); //display the middle note G playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 347 and pinValue <= 362)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    noTone(buzzerPin); //stop the sound from the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("no note."); //display no note playing on the buzzer and move to the next line
  }
  if (pinValue >= 363 and pinValue <= 391) { //check the value of the potentiometer pin to see if it is 
   //between the given range
    tone(buzzerPin, normalG); //play a frequency of middle note G at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note G."); //display the middle note G playing on the buzzer and move to the
  //next line
  }
  if (pinValue >= 392 and pinValue <= 429)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalA); //play a frequency of middle note A at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note A."); //display the middle note A playing on the buzzer and move to the
  //next line
  }
  if (pinValue >= 430 and pinValue <= 467)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalG); //play a frequency of middle note G at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note G."); //display the middle note G playing on the buzzer and move to the
  //next line
  }
  if (pinValue >= 468 and pinValue <= 505)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, highD); //play a frequency of high note D at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("high note D."); //display the high note D playing on the buzzer and move to the 
//next line
  }
  if (pinValue >= 506 and pinValue <= 543)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, highC); //play a frequency of high note C at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("high note C."); //display the high note C playing on the buzzer and move to the 
//next line
  }


  if (pinValue >= 544 and pinValue <= 574)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalG); //play a frequency of middle note G at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note G."); //display the middle note G playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 575  and pinValue <= 590)  { //check the value of the potentiometer pin to see if it is 
     //between the given range
    noTone(buzzerPin); //stop the sound from the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("no note."); //display no note playing on the buzzer and move to the next line
  }
  if (pinValue >= 591 and pinValue <= 619) { //check the value of the potentiometer pin to see if it is 
   //between the given range
    tone(buzzerPin, normalG); //play a frequency of middle note G at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note G."); //display the middle note G playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 620 and pinValue <= 657)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, highG); //play a frequency of high note G at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("high note G."); //display the high note G playing on the buzzer and move to the 
//nextline
  }
  if (pinValue >= 658 and pinValue <= 695)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalE); //play a frequency of middle note E at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note E."); //display the middle note E playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 696 and pinValue <= 733)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalC); //play a frequency of middle note C at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note C."); //display the middle note C playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 734 and pinValue <= 771)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalB); //play a frequency of middle note B at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note B."); //display the middle note B playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 772 and pinValue <= 809)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalA); //play a frequency of middle note A at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note A."); //display the middle note A playing on the buzzer and move to the 
  //next line
  }


  if (pinValue >= 810 and pinValue <= 840)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalF); //play a frequency of middle note F at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note F."); //display the middle note F playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 841 and pinValue <= 856)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    noTone(buzzerPin); //stop the sound from the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("no tone."); //display no note playing on the buzzer and move to the next line
  }
  if (pinValue >= 857  and pinValue <= 885)  { //check the value of the potentiometer pin to see if it is 
     //between the given range
    tone(buzzerPin, normalF); //play a frequency of middle note F at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note F."); //display the middle note F playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 886 and pinValue <= 923)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalE); //play a frequency of middle note E at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note E."); //display the middle note E playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 924 and pinValue <= 961)  { //check the value of the potentiometer pin to see if it is 
  						    //between the given range
    tone(buzzerPin, normalC); //play a frequency of middle note C at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note C."); //display the middle note C playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 962 and pinValue <= 999)  { //check the value of the potentiometer pin to see if it is 
    //between the given range
    tone(buzzerPin, normalD); //play a frequency of middle tone D at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note D."); //display the middle note D playing on the buzzer and move to the 
  //next line
  }
  if (pinValue >= 1000 and pinValue <= 1023)  { //check the value of the potentiometer pin to see if it is 
//between the given range
    tone(buzzerPin, normalC); //play a frequency of middle note C at the pin
    delay(waitTime); //hold the tone for this amount of ms
    Serial.println("middle note C."); //display the middle note C playing on the buzzer and move to the 
  //next line
  }


}

