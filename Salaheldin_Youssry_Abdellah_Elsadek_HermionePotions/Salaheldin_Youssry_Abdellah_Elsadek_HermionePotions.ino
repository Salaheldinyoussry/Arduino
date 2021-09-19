
#include <Timer.h>
int Rled = 13; 
int Gled = 14; 
int Wled = 15; 

int inPin = 7;
bool start=false;   
  

Timer timer;
void setup() {
  pinMode(inPin, INPUT);    
}
void turnOffRed(){
      digitalWrite(Rled,LOW);
      start=false;
}
void flashGreen(){
     for(int i=0; i<5; i++){  // blink for 5 seconds
      digitalWrite(Gled,HIGH);
      delay(500);
      digitalWrite(Gled,LOW);
       delay(500);
     }
}
void flashWhite(){
     for(int i=0; i<10; i++){ // blink for 10 seconds
      digitalWrite(Wled,HIGH);
      delay(500);
      digitalWrite(Wled,LOW);
       delay(500);
     }
}
void loop(){
    timer.update();
  if (digitalRead(inPin) == HIGH) {       
    if(!start){                   
      start=true;
      digitalWrite(Rled,HIGH);
      timer.after(15*60*100, turnOffRed);
      timer.every(2*60*100, flashGreen);
      timer.after(5*60*100, flashWhite);
      timer.after(8*60*100, flashWhite);

    }
  } 
}
