/**************************************************************************
*                                                                         *
*  Input an array and print which element is occured most and how many    *
*  times.                                                                 *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10][2],i,c,j,p,max;
clrscr();
printf("Enter the array\n");
for(i=0;i<10;i++)
{
 scanf("%d",&arr[i][0]);
}
for(i=0;i<10;i++)
{
 max=arr[0][1];
 p=0;
 c=0;
 for(j=0;j<10;j++)
 {
  if(arr[i][0]==arr[j][0])
  {
   c++;
   arr[j][1]=c;
  }
  if(arr[j][1]>max)
  {
   max=arr[j][1];
   p=j;
  }
 }
}
printf("Max occurring element is =%d\nOcurrences=%d\n\n\n",arr[p][0],max);
for(i=0;i<10;i++)
{
 printf("\n%d",arr[i][1]);
}
getch();
}
