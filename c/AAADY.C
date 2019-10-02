/**************************************************************************
*                                                                         *
*                                                                         *
*             Binary search                                               *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10},b,e,i,n,m;
clrscr();
printf("Enter a number");
scanf("%d",&n);
b=0;
e=9;
while(b<=e)
{
 m=(b+e)/2;
 if(n<arr[m])
 {
  e=m-1;
 }
 else if(n>arr[m])
 {
  b=m+1;
 }
 else
 {
  printf("\n\nNumber found at %d",m+1);
  break;
 }
}
if(b>e)
{
 printf("\n\nNumber not found");
}
getch();
}
