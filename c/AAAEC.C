/**************************************************************************
*                                                                         *
*                                                                         *
*                     Merge                                               *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[6]={1,4,6,2,3,5},arr2[4]={1,2,3,4},arr3[10],i,j,k;
clrscr();
k=0;
for(i=0;i<6;i++)
{
 printf("%3d",arr1[i]);
}
printf("\n\n");
for(i=0;i<4;i++)
{
 printf("%3d",arr2[i]);
}
printf("\n\n");
for(i=0;i<6;i++)
{
 arr3[k]=arr1[i];
 k++;
}
for(i=0;i<4;i++)
{
 arr3[k++]=arr2[i];
}
printf("\n\n");
for(i=0;i<10;i++)
{
 printf("%3d",arr3[i]);
}
getch();
}
