#include <Servo.h> 
Servo myservo;  
Servo myservotwo;  
int pos = 0;    
int postwo = 0;   
void setup() 
{ 
  myservo.attach(1);  
  myservotwo.attach(2);  
}
void loop() 
{ 
  for(postwo = 180; postwo >= 0; postwo -= 1) 
  for(pos = 0; pos <= 180; pos += 180)    
  {                                  
    myservo.write(pos);             
    myservotwo.write(postwo);             
    delay(100);                      
  } 
  delay(1);
  for(postwo = 0; postwo <= 180; postwo -= 1) 
  for(pos = 0; pos>=180; pos-=180)     
  {                                
    myservo.write(pos);              
    myservotwo.write(postwo);              
    delay(100);                       
  } 
}
