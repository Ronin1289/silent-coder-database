/**************************************************************************
* A program to swap values using bitwise XOR                              *
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
int i,j,m,n;
clrscr();
printf("Enter i:");
scanf("%d",&i);
printf("Enter j:");
scanf("%d",&j);
m=i;
n=j;
i=i^j;
j=i^j;
i=i^j;
printf("Values before swap\ni=%d\tj=%d",m,n);
printf("\nValues after swap\ni=%d\tj=%d",i,j);
getch();
}
