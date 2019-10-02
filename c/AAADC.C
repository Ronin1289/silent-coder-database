/**************************************************************************
*                                                                         *
*                                                                         *
* A program to make a function sum to accept two numbers from user and    *                          *
* print their sum.                                                        *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,r;
int sum(int,int);
clrscr();
printf("Enter value of a=");
scanf("%d",&a);
printf("Enter value of b=");
scanf("%d",&b);
r=sum(a,b);
printf("Sum =%d",r);
getch();
}
int sum(int x,int y)
{
 int s;
 s=x+y;
 return s;
}