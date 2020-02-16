float b;
void setup(){
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
b=analogRead(A3);
b=b*5/1023;
if(b>=3.90&&b<=4.0){digitalWrite(3,HIGH);}else{digitalWrite(5,LOW);}
if(b>=4.25&&b<=4.35){digitalWrite(3,HIGH);}else{digitalWrite(5,LOW);}
Serial.print("A3");Serial.println(b);delay(10);
}
