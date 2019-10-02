/**************************************************************************
*                                                                         *
*                                                                         *
* A program to print the position of odd entries of array.                *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5]={1,2,3,4,5},i;
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
for(i=0;i<5;i++)
{
 if(arr[i]%2==1)
 {
  printf("\n%d",i);
 }
}
getch();
}
