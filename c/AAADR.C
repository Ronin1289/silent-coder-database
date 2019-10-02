/**************************************************************************
*                                                                         *
*                                                                         *
* A program to input an array and print the sum of smallest & largest     *
* element.                                                                *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],i,s,min,p,max;
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
max=arr[4];
for(i=0;i<5;i++)
{
 if(arr[i]<min)
 {
  min=arr[i];
 }
 if(arr[i]>max)
 {
  max=arr[i];
 }
}
p=min+max;
printf("\n\nminimum=%d",min);
printf("\n\nmaximum=%d",max);
printf("\n\nsum=%d",p);
getch();
}
