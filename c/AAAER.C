/**************************************************************************
*                                                                         *
*                                                                         *
*         break and continue                                              *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
for(x=1;x<10;x++)
{
 if(x%8==0)
 {
  break;
 }
 printf("\n%d",x);
}
printf("\n\nContinue\n");
for(x=1;x<10;x++)
{
 if(x%8==0)
 {
  continue;
 }
 printf("\n%d",x);
}
getch();
}
