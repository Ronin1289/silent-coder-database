/**************************************************************************
*                                                                         *
*                                                                         *
* A program to input an array and print the smallest number with its      *
* position.                                                               *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],i,s,min,p;
clrscr();
printf("Enter an array");
for(i=0;i<5;i++)
{
 scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
 printf("  %d  ",arr[i]);
}
min=arr[0];
p=0;
for(i=0;i<5;i++)
{
 if(arr[i]<min)
 {
  min=arr[i];
  p=i;
 }
}
printf("\n\nminimum=%d",min);
printf("\n\nPosition of min=%d",p);
getch();
}
