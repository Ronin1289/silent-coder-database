/**************************************************************************
*                      A                                                  *
*                      AB                                                 *
* A program to print   BCD                                                *
*                      DEFG                                               *
*                      GHIJK                                              *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
char ch;
clrscr();
ch='A';
for(i=1;i<=5;i++)
{
 printf("\n");
 for(j=1;j<=i;j++)
 {
  printf("%c",ch);
  ch++;
 }
 ch--;
}
getch();
}
