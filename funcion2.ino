int dotDuration = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
morseM();
morseA();
morseR();
morseT();
morseI();
morseA();
  put your main code here, to run repeatedly:
}

void morseM(){
 morseDot();
 morseDot();
 delay(dotDuration*2)
}

void morseA(){
 morseDash();
 morseDot();
 delay(dotDuration*2)
}
void morseR(){
 morseDot();
 morseDash ();
 morseDot(dotDuration*2);
}
 void morseT(){
 morseDash (dotDuration*2);
 }
void morseI(){
 morseDot();
 morseDot(dotDuration*2);
 }
 void morseN(){ 
 morseDash ();
 morseDot(dotDuration*2);
 }
void morseA(){
 morseDash();
 morseDot();
 delay(dotDuration*6)
 }


