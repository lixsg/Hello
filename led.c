#include<wiringPi.h>
#include<stdio.h>
int main()
{
   int i,j;
   i=j=0;
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
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   while(1)
   {
      
   for(i;i<8;i++)
   {
	   digitalWrite(i,LOW);
	   digitalWrite(8,LOW);
	   delay(1000);
   }
   for(i;i>0;i--)
   {
	   digitalWrite(i,HIGH);
	   delay(1000);
	   
   }
 
   }
   return 0;
}
