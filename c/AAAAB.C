/**************************************************************************
* DECIMAL TO OCTAL AND HEXADECIMAL CONVERTER                              *
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
int i,j,k;
clrscr();
printf("\n\nEnter the value=");
scanf("%d",&i);
printf("To convert into octal Enter-1 \nTo convert into hexadecimal Enter-2\n ");
scanf("%d",&j);
j==1?printf("\n\nEntered value in octal is=%#o",i):printf("\n\nEntered value in hexadecimal is=%#x",i);
getch();
}
