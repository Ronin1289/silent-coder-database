/**************************************************************************
*                                                                         *
*                                                                         *
*                     bubble sort                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[6]={1,4,6,2,3,5},i,j,k;
clrscr();
for(i=0;i<6;i++)
{
 printf("%3d",arr[i]);
}
for(i=0;i<6;i++)
{
 for(j=0;j<5;j++)
 {
  if(arr[j+1]<arr[j])
  {
   k=arr[j];
   arr[j]=arr[j+1];
   arr[j+1]=k;
  }
 }
}
printf("\n\n\n");
for(i=0;i<6;i++)
{
 printf("%3d",arr[i]);
}
getch();
}
