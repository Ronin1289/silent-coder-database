/**************************************************************************
*                                                                         *
*                      A                                                  *
*   A program to print ZY                                                 *
*                      ABC                                                *
*                      ZYXW                                               *
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
 printf("\n");
 if(i%2==1)
 {
  ch='A';
  for(j=1;j<=i;j++)
  {
   printf("%c",ch);
   ch++;
  }
 }
 else
 {
  ch='Z';
  for(j=1;j<=i;j++)
  {
   printf("%c",ch);
   ch--;
  }
 }
}
getch();
}