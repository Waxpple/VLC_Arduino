int data[100];
int zo=1;

//quick brown fox  jumps over the lazy dog
String input, output;
char in;

byte a = 0b01100001;
byte b = 0b01100010;
byte c = 0b01100011;
byte d = 0b01100100;  
byte e = 0b01100101;  
byte f = 0b01100110;  
byte g = 0b01100111;  
byte h = 0b01101000; 
byte i = 0b01101001;  
byte j = 0b01101010;  
byte k = 0b01101011;  
byte l = 0b01101100;  
byte m = 0b01101101; 
byte n = 0b01101110;  
byte o = 0b01101111;  
byte p = 0b01110000;  
byte q = 0b01110001;  
byte r = 0b01110010; 
byte s = 0b01110011;  
byte t = 0b01110100;  
byte u = 0b01110101;  
byte v = 0b01110110;  
byte w = 0b01110111;  
byte x = 0b01111000;  
byte y = 0b01111001;  
byte z = 0b01111010;
byte space = 0b00100000;
long unsigned time;

void setup() {
    pinMode(6,OUTPUT);
}

void loop() {
  
  data [0]=0;
  for(int i=1;i<600;i++)
  {
    if (zo==0)
    {
      data[i]=0;
      zo=1;
      }
     else
     {
      data[i]=1;
      zo=0;
      }
          
    }

   for(int j=0;j<60;j++)
   {
    if (data[j]==0)
    { 
      digitalWrite(6, HIGH);
      //data[i]=0;
      //zo=1;
      
      //digitalWrite(6,0);
     // delay(250);
      }
     else
     {
      
      digitalWrite(6, LOW);
      //data[i]=1;
      //zo=0;
       //delay(50);
      //digitalWrite(6,1);
      //delay(500);
      }
      delay(50);
   }

     for(int j=0;j<50;j++)
   { 
    digitalWrite(6,1);
   delay(50);
   //digitalWrite(6,0);       
    } 
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(q);
    transmit(u);
    transmit(i);
    transmit(c);
    transmit(k);
    transmit(space);
    transmit(b);
    transmit(r);
    transmit(o);
    transmit(w);
    transmit(n);
    transmit(space);
    transmit(f);
    transmit(o);
    transmit(x);
    transmit(space);
    transmit(j);
    transmit(u);
    transmit(m);
    transmit(p);
    transmit(s);
    transmit(space);
    transmit(o);
    transmit(v);
    transmit(e);
    transmit(r);
    transmit(space);
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(l);
    transmit(a);
    transmit(z);
    transmit(y);
    transmit(space);
    transmit(d);
    transmit(o);
    transmit(g);
    transmit(space);

    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(q);
    transmit(u);
    transmit(i);
    transmit(c);
    transmit(k);
    transmit(space);
    transmit(b);
    transmit(r);
    transmit(o);
    transmit(w);
    transmit(n);
    transmit(space);
    transmit(f);
    transmit(o);
    transmit(x);
    transmit(space);
    transmit(j);
    transmit(u);
    transmit(m);
    transmit(p);
    transmit(s);
    transmit(space);
    transmit(o);
    transmit(v);
    transmit(e);
    transmit(r);
    transmit(space);
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(l);
    transmit(a);
    transmit(z);
    transmit(y);
    transmit(space);
    transmit(d);
    transmit(o);
    transmit(g);
    transmit(space);

    
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(q);
    transmit(u);
    transmit(i);
    transmit(c);
    transmit(k);
    transmit(space);
    transmit(b);
    transmit(r);
    transmit(o);
    transmit(w);
    transmit(n);
    transmit(space);
    transmit(f);
    transmit(o);
    transmit(x);
    transmit(space);
    transmit(j);
    transmit(u);
    transmit(m);
    transmit(p);
    transmit(s);
    transmit(space);
    transmit(o);
    transmit(v);
    transmit(e);
    transmit(r);
    transmit(space);
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(l);
    transmit(a);
    transmit(z);
    transmit(y);
    transmit(space);
    transmit(d);
    transmit(o);
    transmit(g);
    transmit(space);

    
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(q);
    transmit(u);
    transmit(i);
    transmit(c);
    transmit(k);
    transmit(space);
    transmit(b);
    transmit(r);
    transmit(o);
    transmit(w);
    transmit(n);
    transmit(space);
    transmit(f);
    transmit(o);
    transmit(x);
    transmit(space);
    transmit(j);
    transmit(u);
    transmit(m);
    transmit(p);
    transmit(s);
    transmit(space);
    transmit(o);
    transmit(v);
    transmit(e);
    transmit(r);
    transmit(space);
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(l);
    transmit(a);
    transmit(z);
    transmit(y);
    transmit(space);
    transmit(d);
    transmit(o);
    transmit(g);
    transmit(space);

    
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(q);
    transmit(u);
    transmit(i);
    transmit(c);
    transmit(k);
    transmit(space);
    transmit(b);
    transmit(r);
    transmit(o);
    transmit(w);
    transmit(n);
    transmit(space);
    transmit(f);
    transmit(o);
    transmit(x);
    transmit(space);
    transmit(j);
    transmit(u);
    transmit(m);
    transmit(p);
    transmit(s);
    transmit(space);
    transmit(o);
    transmit(v);
    transmit(e);
    transmit(r);
    transmit(space);
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(l);
    transmit(a);
    transmit(z);
    transmit(y);
    transmit(space);
    transmit(d);
    transmit(o);
    transmit(g);
    transmit(space);

    
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(q);
    transmit(u);
    transmit(i);
    transmit(c);
    transmit(k);
    transmit(space);
    transmit(b);
    transmit(r);
    transmit(o);
    transmit(w);
    transmit(n);
    transmit(space);
    transmit(f);
    transmit(o);
    transmit(x);
    transmit(space);
    transmit(j);
    transmit(u);
    transmit(m);
    transmit(p);
    transmit(s);
    transmit(space);
    transmit(o);
    transmit(v);
    transmit(e);
    transmit(r);
    transmit(space);
    transmit(t);
    transmit(h);
    transmit(e);
    transmit(space);
    transmit(l);
    transmit(a);
    transmit(z);
    transmit(y);
    transmit(space);
    transmit(d);
    transmit(o);
    transmit(g);
    transmit(space);

    
    
    
    
   digitalWrite(6,0);

  //exit(0);  
    





}
void transmit(byte data)
{ 
  time = micros();
  for(int j=7;j>-1;j--){
      //time = micros();
      
      digitalWrite(6,bitRead(data,j));
      //delay(50);
      
      while(micros()<time+50000*(8-j)){
        
    //Serial.println(millis());
      }
      
   }
   //Serial.println(micros()-time);
 }
