//TRAFFIC LIGHTS//
int red = 13;
int amber = 8;
int green = 3;

void setup(){
red,OUTPUT;
amber,OUTPUT;
green,OUTPUT;

}

void loop(){
digitalWrite(red,HIGH);
delay(10000);
digitalWrite(red,LOW);
  
digitalWrite(amber,HIGH);
delay(1000);
digitalWrite(red,LOW);
delay(500);  
  
  
digitalWrite(green,HIGH);
delay(10000);
digitalWrite(green,LOW); 
delay(500);  

  
digitalWrite(amber,HIGH);
delay(1000);
digitalWrite(amber,LOW);
delay(500);  

digitalWrite(amber,HIGH);
delay(1000);
digitalWrite(amber,LOW);
delay(500);      
  
}
