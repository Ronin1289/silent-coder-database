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
int r;
int sum();
clrscr();
r=sum();
printf("Sum=%d",r);
getch();
}
int sum(void)
{
 int x,y,s;
 printf("Enter two numbers");
 scanf("%d %d",&x,&y);
 s=x+y;
 return s;
}
