/**************************************************************************
*                                                                         *
* A program to make a function isprime and print all the prime factors of *
* a given number.                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
int isprime(int);
clrscr();
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 if(n%i==0&&isprime(i)==1)
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