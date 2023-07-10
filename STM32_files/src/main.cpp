#include <Arduino.h>
#include "SpeedControl.h"

void encoder1();
void encoder2();
void encoder3();
void encoder4();
void encoder5();
void encoder6();
SpeedControl frontleft;
SpeedControl frontright;
SpeedControl middleleft;
SpeedControl middleright;
SpeedControl rearleft;
SpeedControl rearright;
long count1=0, count2=0, count3=0, count4=0, count5=0, count6=0;
float vel = 0.5;

void setup()
{
  Serial.begin(9600);
  
  frontleft.setPin(PA2, PB13, PB9, PB8);
  frontleft.setReversePolarity(false);
  frontleft.setSpeed(vel);
  frontleft.setPIDOutput();

  frontright.setPin(PA3, PB14, PB6, PB7);
  frontright.setReversePolarity(false);
  frontright.setSpeed(vel);
  frontright.setPIDOutput();

  middleleft.setPin(PA5, PB15, PB5, PB4);
  middleleft.setReversePolarity(false); //PA3, PA2, PA1, PA0
  middleleft.setSpeed(vel);
  middleleft.setPIDOutput();

  middleright.setPin(PA8, PB11, PB3, PA15);
  middleright.setReversePolarity(false);
  middleright.setSpeed(vel);
  middleright.setPIDOutput();

  rearleft.setPin(PA9, PA6, PA12, PA11);
  rearleft.setReversePolarity(false);
  rearleft.setSpeed(vel);
  rearleft.setPIDOutput();

  rearright.setPin(PA7, PB10, PA1, PA0);
  rearright.setReversePolarity(false);
  rearright.setSpeed(vel);
  rearright.setPIDOutput();
 


  attachInterrupt(digitalPinToInterrupt(PB9),encoder1,RISING);
  attachInterrupt(digitalPinToInterrupt(PB6),encoder2,RISING);
  attachInterrupt(digitalPinToInterrupt(PB5),encoder3,RISING);
  attachInterrupt(digitalPinToInterrupt(PB3),encoder4,RISING);
  attachInterrupt(digitalPinToInterrupt(PA12),encoder5,RISING);
  attachInterrupt(digitalPinToInterrupt(PA1),encoder6,RISING);
}

void loop()
{
  frontleft.controlLoop();
  frontright.controlLoop();
  middleleft.controlLoop();
  middleright.controlLoop();
  rearleft.controlLoop();
  rearright.controlLoop();
  frontleft.setCount(count1);
  frontright.setCount(count2);
  middleleft.setCount(count3);
  middleright.setCount(count4);
  rearleft.setCount(count5);
  rearright.setCount(count6);

  Serial.print(middleleft.currentPosition);
  Serial.print(" ");
  Serial.print(middleleft.outputPWM);
  Serial.print(" ");
  Serial.println(middleleft.currentVelocity);
  delay(300);
}

void encoder1()
{
  int b = digitalRead(PB8);
  if (b==0)
  {
    count1--;
  }
  else{
    count1++;
  }
}

void encoder2()
{
  int b = digitalRead(PB7);
  if (b==0)
  {
    count2--;
  }
  else{
    count2++;
  }
}
void encoder3()
{
  int b = digitalRead(PB4);
  if (b==0)
  {
    count3--;
  }
  else{
    count3++;
  }
}

void encoder4()
{
  int b = digitalRead(PA15);
  if (b==0)
  {
    count4--;
  }
  else{
    count4++;
  }
}

void encoder5()
{
  int b = digitalRead(PA11);
  if (b==0)
  {
    count5--;
  }
  else{
    count5++;
  }
}

void encoder6()
{
  int b = digitalRead(PA0);
  if (b==0)
  {
    count6--;
  }
  else{
    count6++;
  }
}
