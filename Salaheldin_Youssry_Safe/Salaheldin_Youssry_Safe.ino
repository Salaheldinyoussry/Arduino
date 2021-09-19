 int encoder_a_1 =11
 int encoder_b_1 =12
 int encoder_a_2 =13
 int encoder_b_2 =14
 int encoder_a_3 =15
 int encoder_b_4 =16
 int led =2;
int counter1=0;
int counter2=0;
int counter3=0;

 void setup() { 
   pinMode (encoder_a_1,INPUT_PULLUP);
   pinMode (encoder_b_1,INPUT_PULLUP);
   pinMode (encoder_a_2,INPUT_PULLUP);
   pinMode (encoder_b_2,INPUT_PULLUP);
   pinMode (encoder_a_3,INPUT_PULLUP);
   pinMode (encoder_b_3,INPUT_PULLUP);
   pinMode (led,OUTPUT);

   attachInterrupt(digitalToInterrupt(encoder_a_1),eA1,CHANGE );
   attachInterrupt(digitalToInterrupt(encoder_b_1),eB1,CHANGE );
   attachInterrupt(digitalToInterrupt(encoder_a_2),eA2,CHANGE );
   attachInterrupt(digitalToInterrupt(encoder_b_2),eB2,CHANGE );
   attachInterrupt(digitalToInterrupt(encoder_a_3),eA3,CHANGE );
   attachInterrupt(digitalToInterrupt(encoder_b_3),eB3,CHANGE );
   
 } 
 void eA1(){
  if(digitalRead(encoder_a_1)!= digitalRead(encoder_b_1))
    counter1++
  else
     counter1--;  
  }
 void eB1(){
    if(digitalRead(encoder_a_1)<= digitalRead(encoder_b_1))
    counter1++
  else
     counter1--; 
  }
   void eA2(){
    if(digitalRead(encoder_a_2)!= digitalRead(encoder_b_2))
    counter2++
  else
     counter2--; 
  }
   void eB2(){
    if(digitalRead(encoder_a_2)<= digitalRead(encoder_b_2))
    counter2++
  else
     counter2--; 
  }
   void eA3(){
    if(digitalRead(encoder_a_3)!= digitalRead(encoder_b_3))
    counter3++
  else
     counter3--; 
  }
   void eB3(){
    if(digitalRead(encoder_a_3)<= digitalRead(encoder_b_3))
    counter3++
  else
     counter3--; 
  }
 void loop() { 
  int ang1= int(counter1*(-1.8);
  int ang2= int(counter2*(-1.8);   // converting steps to rotation angle
  int ang3= int(counter3*(-1.8);
  if(ang1==37 && ang2==10 && ang3==54){

    digitalWrite(led,HIGH);
  }
 }
