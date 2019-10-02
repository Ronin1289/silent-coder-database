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
int a,b;
void sum(int,int);
clrscr();
printf("Enter value of a=");
scanf("%d",&a);
printf("Enter value of b=");
scanf("%d",&b);
sum(a,b);
getch();
}
void sum(int x,int y)
{
 printf("%d",x+y);
}