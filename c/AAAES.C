/**************************************************************************
*                                                                         *
*                                                                         *
*                      unfinished                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
a:
{
 printf("Executed on A\n");
}
b:
{
 printf("Executed on B\n");
}
for(i=1;i<10;i++)
{
 if(i%2==0)
 {
  printf("%d",i);
  goto a;
 }
 else
 {
  printf("%d",i);
  goto b;
 }
}
getch();
}
