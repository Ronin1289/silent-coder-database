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
void sum();
clrscr();
sum();
getch();
}
void sum(void)
{
 int x,y;
 printf("Enter two numbers");
 scanf("%d %d",&x,&y);
 printf("%d",x+y);
}
