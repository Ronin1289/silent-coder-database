/**************************************************************************
*                                                                         *
*     Input and output of string                                          *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
clrscr();
printf("Enter a strring");
flushall();
gets(str);
printf("\n\n%s",str);
puts(str);
getch();
}
