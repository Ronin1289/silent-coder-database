/**************************************************************************
*                                                                         *
*                                                                         *
* sorting not working
									*
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[6]={4,3,6,2,9,1},i,j,min,p;
clrscr();
for(i=0;i<6;i++)
{
 min=arr[i];
 p=i;
 for(j=i;j<6;j++)
 {
  if(arr[j]<min)
  {
   min=arr[j];
   p=j;
  }
 }
}
for(i=0;i<6;i++)
{
 printf("\n%d",arr[i]);
}
getch();
}
