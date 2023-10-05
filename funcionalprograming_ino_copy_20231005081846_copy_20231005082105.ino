int dotDuration= 500;
void setup() {
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {

  //M
 morseDot();
 morseDot();
 delay(dotDuration*2)
 //A
 morseDash();
 morseDot();
 delay(dotDuration*2)
 //R
 morseDot();
 morseDash ();
 morseDot(dotDuration*2);
 //T
 morseDash (dotDuration*2);
 //I
 morseDot();
 morseDot(dotDuration*2);
 //N 
 morseDash ();
 morseDot(dotDuration*2);
 //A
 morseDash();
 morseDot();
 delay(dotDuration*6)
 



 

}


void morseDot() {
digitalWrite(13,1);
delay(dotDuration);
digitalWrite(13,0);
delay(dotDuration);
}

void morseDash() {
digitalWrite(13,1);
delay(dotDuration*3);
digitalWrite(13,0);
delay(dotDuration);
}