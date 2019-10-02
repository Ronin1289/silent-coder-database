/********************************************************
* BINARY SEARCH                                         *
* 12/08/2019                                            *
*                                                       *
*                                                       *												       *
********************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10},i,beg,end,mid,s_no;
clrscr();
printf("Enter the element");
scanf("%d",&s_no);
beg=0;
end=9;
while(beg<=end)
{
 mid=(beg+end)/2;
 if(s_no>arr[mid])
 {
  beg=mid+1;
 }
 else if(s_no<arr[mid])
 {
  end=mid-1;
 }
 else
 {
  printf("Element found at %d",mid+1);
  break;
 }
}
if(beg>end)
{
 printf("Not found");
}
getch();
}
