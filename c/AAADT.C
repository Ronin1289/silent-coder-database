/**************************************************************************
*                                                                         *
* A program to search for a number in array and print it along with its   *
* position.                                                               *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[6]={1,2,3,4,5,6},i,n,a;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
a=0;
for(i=0;i<6;i++)
{
 printf(" %d ",arr[i]);
}
for(i=0;i<6;i++)
{
 if(arr[i]==n)
 {
  a++;
  break;
 }
}
if(a==1)
{
 printf("\nNo. is present\nposition=%d",i);
}
else
{
 printf("\nNo. not present");
}
getch();
}
