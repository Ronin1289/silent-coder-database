/*****************************************************
*                                                    *
*  LINEAR SEARCH                                     *
*  12/08/2019                                        *
*                                                    *                     									*
*****************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10]={20,100,30,70,40,10,50,80,60,90},i,s_no;
clrscr();
printf("Enter the number to be searched");
scanf("%d",&s_no);
for(i=0;i<10;i++)
{
 if(arr[i]==s_no)
 {
  printf("No. found at %d",i+1);
  break;
 }
}
if(i==10)
{
 printf("Not found");
}
getch();
}
