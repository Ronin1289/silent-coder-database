/**************************************************************************
*                                                                         *
* A program to make a function isprime and print all the prime numbers in *
* range 100 to 200.                                                       *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int isprime(int);
clrscr();
for(i=100;i<=200;i++)
{
 if(isprime(i)==1)
 {
  printf("\n%d",i);
 }
}
getch();
}
int isprime(int n)
{
 int i,f;
 f=0;
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   f++;
  }
 }
 if(f==2)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}