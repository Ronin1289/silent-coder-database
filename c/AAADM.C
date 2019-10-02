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
int arr[6]={1,6,33,65,4,7},i,j;
void sort(int*);
clrscr();
for(i=0;i<6;i++)
 {
  printf("\n%d",*(arr+i));
 }
printf("\n sorted");
sort(arr);
getch();
}
void sort(int *arr)
{
 int i,j;
 for(i=0;i<6;i++)
 {
  if(arr[i+1]>arr[i])
  {
   arr[j]=arr[i];
   arr[i]=arr[i+1];
   arr[i+1]=arr[j];
  }
 }
 for(i=0;i<6;i++)
 {
  printf("\n%d",arr[i]);
 }
}
