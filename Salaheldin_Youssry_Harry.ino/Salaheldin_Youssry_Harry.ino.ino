int leftIR = 2;
int frontIR = 9;  // extra not needed in this maze (assuming that the robot knows the correct path)
int rightIR = 10;
void setup() {
 pinMode (leftIR, INPUT);
 pinMode (frontIR, INPUT);
 pinMode (rightIR, INPUT);

}

int i=0;
void loop() {
       //  pattern R R L L R .......

   if(i<2 && rightIR==HIGH){ // there is right path  
    rotate90right();                 
    i++;
     i=i%4;  // pattern is just repetation of "R R L L"
   }
   else if(i>1 && leftIR==HIGH){ // there is left path
   rotate90left();
   i++;
    i=i%4;
   }
   else{
    moveForward();
   }



}
