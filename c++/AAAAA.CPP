/*************************************************************************
*                                                                        *
*                * * *    * * *    * * *                                 *
*                *        *   *    *   *                                 *
*                *        * * *    * * *                                 *
*                *        *   *    *  *                                  *       *
*                * * *    *   *    *   *                                 *
**************************************************************************/
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class car
{
 int speed;
 int gear;
 int direction;
 long fuel;
 public:
 void refuel(){cout<<"\nEnter fuel value";cin>>fuel;}
 void a(){direction=0;speed=0;gear=0;fuel=0;}
 void acclerate(){speed=speed+5;fuel--;}
 void deacclerate(){if(speed!=0){speed-=5;}fuel--;}
 void left(){direction--;}
 void right(){direction++;}
 int fuelcheck(){return fuel;}
 void disp()
 {
 cout<<"\tSpeed="<<speed<<"\tDirection="<<direction<<"\tFuel="<<fuel;
 if(speed<20)
 {
  gear=1;
 }
 else if(speed<35)
 {
  gear=2;
 }
 else if(speed<50)
 {
  gear=3;
 }
 else if(speed<75)
 {
  gear=4;
 }
 else if(speed<95)
 {
  gear=5;
 }
 else
 {
  gear=6;
 }
 cout<<"\tGear="<<gear;
 }
};
void main()
{
 char ch;
 int f;
 car mycar;
 mycar.a();
 clrscr();
  do
  {
    clrscr();
    mycar.disp();
    flushall();
    ch=getch();
    //cin>>ch;
    switch(ch)
    {
     case 'w':mycar.acclerate();break;
     case 's':mycar.deacclerate();break;
     case 'a':mycar.left();break;
     case 'd':mycar.right();break;
    }
  }while(ch!='x');
 f=mycar.fuelcheck();
 cout<<"\n Remaning fuel"<<f;
 cout<<"\nEnd of program";
 getch();
}
