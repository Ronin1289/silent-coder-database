/**************************************************************************
*                                                                         *
*                                                                         *
* A program to input an array and print how many positive and negative    *
* elements.                                                               *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],i,s,p=0,n=0;
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
 if(*(arr+i)>=0)
 {
  p++;
 }
 else
 {
  n++;
 }
}
printf("\nPositive=%d\n\nNegative=%d",p,n);
getch();
}
