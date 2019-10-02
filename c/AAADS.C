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
int arr[5],i,s,min,p,max,q;
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
p=0;
q=0;
for(i=0;i<5;i++)
{
 if(arr[i]<min)
 {
  min=arr[i];
  p=i;
 }
 if(arr[i]>max)
 {
  max=arr[i];
  q=i;
 }
}
printf("\n\nminimum=%d",min);
printf("\n\nmaximum=%d\n\n",max);
printf("ARRAY");
for(i=p;i<q;i++)
{
 printf("\n%d",arr[i]);
}
getch();
}
