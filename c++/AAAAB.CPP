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
void disp(int i=0,int j=0,int k=0)
{
 int sum;
 sum=i+j+k;
 cout<<"sum="<<sum;
}
void main()
{
int a,b,c;
clrscr();
cout<<"Enter first no.";
cin>>a;
cout<<"Enter second no.";
cin>>b;
cout<<"Enter third no.";
cin>>c;
disp();
getch();
}
