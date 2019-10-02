/**************************************************************************
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
class student
{
 public:
 int age,roll;
 char *name;
 student()
 {
  cout<<"Enter the roll.no";
  cin>>roll;
  cout<<"Enter the age";
  cin>>age;
  cout<<"Enter the name";
  gets(name);
 }
 void disp()
 {
  cout<<"Roll.No="<<roll;
  cout<<"\tage="<<age;
  cout<<"\tNAME=";
  puts(name);
 }
};

void main()
{
 int i;
 clrscr();
 student st[3];
 for(i=0;i<3;i++)
 {
  st[i];
  st[i].disp();
 }
 for(i=0;i<3;i++)
 {
  st[i].disp();
 }
 getch();
}