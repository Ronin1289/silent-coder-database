/**************************************************************************
*                                                                         *
*                      A                                                  *
*   A program to print AB                                                 *
*                      ABC                                                *
*                      ABCD                                               *
*                      ABCDE                                              *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char ch;
clrscr();
for(i=1;i<=5;i++)
{
 ch='A';
 printf("\n");
 for(j=1;j<=i;j++)
 {
  printf("%c",ch);
  ch++;
 }
}
getch();
}