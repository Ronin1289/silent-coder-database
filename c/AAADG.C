/**************************************************************************
*                                                                         *
*                                                                         *
* A program to make a function sum to accept three numbers from user and  *
* return greatest & use it to find greatest of 7 numbers.                 *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int r,n1,n2,n3,n4,n5,n6,n7,t1,t2,t3,s;
int gt(int,int,int);
clrscr();
printf("Enter 5 numbers");
scanf("%d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7);
t1=gt(n1,n2,n3);
t2=gt(n4,n5,n6);
s=gt(t1,t2,n7);
printf("greatest=%d",s);
getch();
}
int gt(int a,int b,int c)
{
 if(a>b&&a>c)
 {
  return a;
 }
 else if(b>a&&b>c)
 {
  return b;
 }
 else if(c>a&&c>b)
 {
  return c;
 }
}
