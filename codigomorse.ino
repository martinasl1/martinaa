int doDuration= 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // M 
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration*3);
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration*3); 
 delay(dotduration);                      // wait for a second
digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration*3);
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration*3); 

  // A
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration);                      // wait for a second
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration*3);
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration*3); 

  //R
igitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration);                       // wait for a second
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration*3);
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration*3); 
 delay(dotduration);                      // wait for a second
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration);                   

  //T
  digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration*3);
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration*3); 
 delay(dotduration);
  //I
digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration);                      // wait for a second
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration);                     
  //N
digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration);                      // wait for a second

  //A
digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration); 
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration);                      // wait for a second
 digitalWrite(LED_BUILTIN, HIGH); 
 delay(dotduration*3);
 digitalWrite(LED_BUILTIN,LOW); 
 delay(dotduration*3); 
}