
void setup() {

  
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);


Serial.begin(9600);

}

void loop() {


 
if(Serial.available())

{int x= Serial.read();

if (x=='1'){digitalWrite(2,HIGH);}
else {digitalWrite(2,LOW);}

if(x=='2'){digitalWrite(3,HIGH);}
else {digitalWrite(3,LOW);}

if(x=='3'){digitalWrite(4,HIGH);}
else {digitalWrite(4,LOW);}

if(x=='4'){digitalWrite(5,HIGH);}
else {digitalWrite(5,LOW);}

if(x=='5'){digitalWrite(6,HIGH);}
else {digitalWrite(6,LOW);}

if(x=='6'){digitalWrite(7,HIGH);}
else {digitalWrite(7,LOW);}

if(x=='7'){digitalWrite(8,HIGH);}
else {digitalWrite(8,LOW);}

if(x=='8'){digitalWrite(9,HIGH);}
else {digitalWrite(9,LOW);}

if(x=='9'){digitalWrite(10,HIGH);}
else {digitalWrite(10,LOW);}



if (x=='0')

{digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);}
Serial.println(x);


}
}
