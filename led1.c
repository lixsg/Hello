#include<stdio.h>
#include<wiringPi.h>
int main()
{
   wiringPiSetup();
   pinMode(0,OUTPUT); 
   pinMode(1,OUTPUT);
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
   pinMode(7,OUTPUT);
   pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
   digitalWrite(0,HIGH);
   digitalWrite(1,HIGH);
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(6,HIGH);
   digitalWrite(7,HIGH);
   
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
    
    digitalWrite(8,LOW);
    int total = 20;
    int time = total;
    int step = 5;
    int i,s;
    s=0;
    while(1)
    {
       time -= step;
       for(i=0;i<10;i++)
       {
          digitalWrite(1,LOW);
          delay(time);
          printf("time=%d\n",time);
          digitalWrite(1,HIGH);
          s=total-time;
          delay(s);
          printf("s=%d\n",s);
          if(time<=0)
             time = total;
       }
    }
    return 0;
}
