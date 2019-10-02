/**************************************************************************
*                                                                         *
*                                                                         *
* A program to print the sum of all entries of array.                     *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5]={1,2,3,4,5},i,s;
clrscr();
printf("Enter an array");
for(i=0;i<5;i++)
{
 scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
 printf("%d,",arr[i]);
}
s=0;
for(i=0;i<5;i++)
{
 //s=s+arr[i];
 s=s+(*(arr+i));
}
printf("\n%d",s);
getch();
}
