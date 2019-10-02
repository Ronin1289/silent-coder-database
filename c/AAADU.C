/**************************************************************************
*                                                                         *
*                                                                         *
* A program for binary search.binary search works only with sorted array. *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10]={10,20,30,40,50,60,70,80,90,100},n,i,j,b,e,m;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
b=0;
e=9;
while(b<=e)
{
 m=(b+e)/2;
 if(n>arr[m])
 {
  b=m+1;
 }
 else if(n<arr[m])
 {
  e=m-1;
 }
 else
 {
  printf("No. found=%d",m+1);
  break;
 }
}
if(b>e)
{
 printf("Not Found");
}
getch();
}
