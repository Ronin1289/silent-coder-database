/**************************************************************************
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
while(!(n<=100&&n>=0))
{
 printf("Enter marks;");
 scanf("%d",&n);
 if(n<33)
 {
  printf("Fail");
  break;
 }
 else if(n>=33&&n<=100)
 {
  printf("Pass");
  break;
 }
 else
 {
  printf("\nInvalid marks\n");
 }
}
getch();
}
