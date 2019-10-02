/**************************************************************************
*                                                                         *
*                      A                                                  *
*   A program to print BC                                                 *
*                      DEF                                                *
*                      GHIJ                                               *
*                      KLMNO                                              *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
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
}
getch();
}