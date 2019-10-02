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
int arr[10]={4,6,3,9,8},i,j,k,v,p;
clrscr();
printf("\n\nEnter the value");
scanf("%d",&v);
printf("\n\nEnter the position");
scanf("%d",&p);
printf("\nArray before insertion=\n");
for(i=0;i<10;i++)
{
 printf("%3d",arr[i]);
}
for(i=9;i>=p;i--)
{
 arr[i]=arr[i-1];
}
arr[p-1]=v;
printf("\nArray after insertion=\n");
for(i=0;i<10;i++)
{
 printf("%3d",arr[i]);
}

getch();
}
