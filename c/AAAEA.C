/**************************************************************************
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
 int arr[10]={2,5,4,1,3,8,9,6,10,7},i,min,j,k,p;
 clrscr();
 printf("Entered array is:\n");
 for(i=0;i<10;i++)
 {
  printf("%3d",arr[i]);
 }
 for(i=0;i<10;i++)
 {
  min=arr[i];
  p=i;
  for(j=i;j<10;j++)
  {
   if(min>arr[j])
   {
    min=arr[j];
    p=j;
   }
  }
  k=arr[p];
  arr[p]=arr[i];
  arr[i]=k;
 }
 printf("\nSorted array is:\n");
 for(i=0;i<10;i++)
 {
  printf("%3d",arr[i]);
 }
 getch();
}
