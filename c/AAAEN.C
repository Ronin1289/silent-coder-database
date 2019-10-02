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
int i,n,j,arr[10]={1,2,3,4,5,6,7,9,10},val,p;
clrscr();
printf("Entered array is:");
i=0;
p=5
while(arr[i]!=NULL)
{
 printf("%3d",arr[i]);
 i++;
}
printf("\n\nEnter the position of insertion");
flushall();
scanf("%d",&n);
printf("\n\nEnter the value");
scanf("%d",&val);
for(i=10;i>(p+1);i--)
{
 arr[i]=arr[i-1];
}
arr[p+1]=val;
if(n==0)
{
 printf("\n\tError");
}
printf("\n\n");
while(arr[i]!=NULL)
{
 printf("%3d",arr[i]);
 i++;
}
getch();
}
