/**************************************************************************
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
 public:
 static int i;
 static void disp()
 {
  cout<<"\n I love you"<<i;
 }
 void disp1()
 {
  cout<<"i am sorry mr. stark";
 }
};
int student::i=3000;
void main()
{
student s;
clrscr();
s.disp();
s.disp1();
student::disp();
getch();
}
