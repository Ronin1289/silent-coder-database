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
 int r;
 char name[20];
 void add();
 void remove();
 void disp();
};
void student::add()
{
 cout<<"\nEnter roll. no";
 cin>>r;
 cout<<"\nEnter name";
 flushall();
 gets(name);
}
inline void  student::remove()
{
 int k;
 r=NULL;
 for(k=0;k<20;k++)
 {
 name[k]=NULL;
 }
}
void student::disp()
{
 cout<<"\nRoll no."<<r;
 cout<<"\tName";
 puts(name);
}

void main()
{
int i,j;
student s[5];
clrscr();
for(i=0;i<3;i++)
{
 s[i].add();
}
for(i=0;i<3;i++)
{
 s[i].disp();
}
cout<<"\n Enter the value you want to delete";
cin>>j;
s[j-1].remove();
cout<<"\n After deletion";
for(i=0;i<3;i++)
{
 s[i].disp();
}


getch();
}
