#include<stdio.h>
#include<wiringPi.h>
int main()
{
    wiringPiSetup();
    pinMode(0,OUTPUT);
    digitalWrite(0,LOW);
    softPwmCreate(8,0,100);
    softPwmCreate(9,0,100);
    softPwmCreate(10,0,100);
    while(1)
    {
      softPwmWrite(8,255);
      softPwmWrite(9,100);
      softPwmWrite(10,5);
      delay(1000);
      softPwmWrite(8,255);
      softPwmWrite(9,0);
      softPwmWrite(10,255);
      delay(1000);
      softPwmWrite(8,255);
      softPwmWrite(9,100);
      softPwmWrite(10,100);
      delay(1000);
    }
    return 0;
}
