const int analogInPin = 6;  // Analog input pin that the potentiometer is attached to
byte answer = 0b11111111;
int sensorValue = 0;
bool flag1 = true;
bool flag2 = false;
bool flag3 = false;
bool flag4 = 0;
bool flag_r_1=false,flag_r_2=false,flag_r_3=false;
unsigned int c_1=0,c_2=0,c_3=0;
bool temp=1;
unsigned long time,time2;
unsigned long duration;

//#include <LiquidCrystal.h>

//const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
//LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(analogInPin,INPUT);
  Serial.println("Start to sync!...");
  
  //lcd.begin(16, 2);
  // Print a message to the LCD.
  

}

void loop() {
  // put your main code here, to run repeatedly:
  time = micros();
  if(flag1){
    
    sync();
  }else if(flag2){
    wait_f();
  }else if(flag3){
    receive();
  }
  
  //fix latency
  //delay(50);
  //Serial.println(time);
  while(micros()<time+50000){
    //Serial.println(millis());
  }
}
void sync(){
  sensorValue= digitalRead(analogInPin);
  //Serial.println(sensorValue);
  if(temp==sensorValue){
    adjust();
    Serial.println("+1");
  }
  temp = sensorValue;
  c_1++;
  
  if(c_1>49){
    //Serial.println("Sync done...");
    flag1=false;
    flag2=true;
  }
  
}
void wait_f(){
  sensorValue= digitalRead(analogInPin);
  
  //Serial.print(c_2);
  if(sensorValue){
    c_2++;
  }else{
    c_2=0;
  }
  if(c_2==50){
    flag2=false;
    flag3=true;
  }
  
}
void receive(){
  sensorValue= digitalRead(analogInPin);
  //Serial.println(sensorValue);
    
    if(sensorValue){
      bitSet(answer, 7-(c_3%8));
    }else{
      bitClear(answer, 7-(c_3%8));
    }
    //bitWrite(answer,7-(startc3%8),outputValue);
    
    c_3++;
    if(c_3%8==0){
      //Serial.println(answer,BIN);
      Serial.write(answer);
      //lcd.write(answer);
      //lcd.scrollDisplayRight();
     }
     //if(c_3%132==0){
      //lcd.setCursor(0,1);
     //}
     if(answer==0b00000000){
      Serial.println("end!!");
      exit(0);
     }
     
}
void adjust(){
  time2 = micros();
  //delayMicroseconds(100);
  while(micros()<time2+20000){
    //Serial.println(millis());
  }
  Serial.println("ERROR TIME");
  c_1=0;
  flag_r_1=false;
}
