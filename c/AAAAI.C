/**************************************************************************
*                                                                         *
*                                                                         *
*  A program to compare two variables using properties of logical AND     *
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
printf("Enter first no.:");
scanf("%d",&i);
printf("Enter second no:");
scanf("%d",&j);
i>j&&printf("First no. is bigger.");
j>i&&printf("Second no. is bigger.");
getch();
}