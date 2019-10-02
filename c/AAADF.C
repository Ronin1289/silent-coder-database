/**************************************************************************
*                                                                         *
*                                                                         *
* A program to make a function sum to accept two numbers from user and    *
* return greatest & use it to find greatest of 5 numbers.                 *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int r,n1,n2,n3,n4,n5,t1,t2,t3,s;
int gt(int,int);
clrscr();
printf("Enter 5 numbers");
scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
s=gt(gt(gt(n1,n2),gt(n3,n4)),n5);
printf("greatest=%d",s);
getch();
}
int gt(int a,int b)
{
 if(a>b)
 {
  return a;
 }
 else
 {
  return b;
 }
}
