/**************************************************************************
*                                                                         *
*                                                                         *
*             Binary search     Descending order                          *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10]={10,9,8,7,6,5,4,3,2,1},b,e,i,n,m;
clrscr();
printf("\n\n");
for(i=0;i<10;i++)
{
 printf("%3d",arr[i]);
}
printf("\nEnter a number");
scanf("%d",&n);
b=0;
e=9;
while(b<=e)
{
 m=(b+e)/2;
 if(n>arr[m])
 {
  e=m-1;
 }
 else if(n<arr[m])
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
