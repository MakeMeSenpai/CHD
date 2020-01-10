//ports setup
#define relay1 7
#define relay2 6
#define relay3 5
#define relay4 4
const int mic = A0;

//decibles
const int small = 50; //40
const int medium = 750; //75
const int large = 1000; //100

//frequencies
const int blue = 32;
const int green = 262;
const int red = 1000;

// put your setup code here, to run once:
void setup() {
  //pinMode tells the computer where to find your object (LED_BUILTIN), and what type of object it is (output).
  pinMode(mic, INPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
}

// put your main code here, to run repeatedly:
void loop() {
  // this is a test to see if your code is responsive. The L LED should blink
    //  digitalWrite(LED_BUILTIN, HIGH); //turns LED on
    //  delay(1000); // classic C++, this is in miliseconds, so 1000 = 1 sec.
    //  digitalWrite(LED_BUILTIN, LOW); //turns LED off
    //  delay(500); 

  //takes in our microphones data
  int freq=(analogRead(mic)*10); //reads analog and converts to frequencies.We define this value as freq
  int sound=(analogRead(mic)); //reads analog and converts to decilbels. We define this value as sound //(20 * log10(analogRead(mic)))

//  //if certain frequency turn on color
//  if (freq>=red){
   //if certain Decible set pattern
   if (sound>=large){
      digitalWrite(relay2, HIGH); //255
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      delay(250);
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, LOW);
      delay(250);
    }
    else if (sound>=medium){
      digitalWrite(relay2, HIGH); //127
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      delay(1000);
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, LOW);
      delay(250);
    }
    else if (sound>=small){
      digitalWrite(relay2, HIGH); //63.5
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, HIGH);
      delay(3000);
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, LOW);
      delay(250);
    }
    else {
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, LOW);
    }
//  }

//  //if certain frequency turn on color
//  else if (freq>=green){
//   //if certain Decible set pattern
//   if (sound>=large){
//      digitalWrite(relay3, 255); //255
//      delay(250);
//      digitalWrite(relay3, LOW);
//      delay(250);
//    }
//    else if (sound>=medium){
//      digitalWrite(relay3, 127); //127
//      delay(1000);
//      digitalWrite(relay3, LOW);
//      delay(1000);
//    }
//    else if (sound>=small){
//      digitalWrite(relay3, 64); //63.5
//      delay(3000);
//      digitalWrite(relay3, LOW);
//      delay(3000);
//    }
//    else {
//      digitalWrite(relay2, LOW);
//    }
//  }
//
//  //if certain frequency turn on color
//  else if (freq>=blue){
//   //if certain Decible set pattern
//   if (sound>=large){
//      digitalWrite(relay4, 255); //255
//      delay(250);
//      digitalWrite(relay4, LOW);
//      delay(250);
//    }
//    else if (sound>=medium){
//      digitalWrite(relay4, 127); //127
//      delay(1000);
//      digitalWrite(relay4, LOW);
//      delay(1000);
//    }
//    else if (sound>=small){
//      digitalWrite(relay4, 64); //63.5
//      delay(3000);
//      digitalWrite(relay4, LOW);
//      delay(3000);
//    }
//    else {
//      digitalWrite(relay4, LOW);
//    }
//  }
//
//  else {
//    digitalWrite(relay2, HIGH);
//    digitalWrite(relay3, HIGH);
//    digitalWrite(relay4, HIGH);
//  }
}
