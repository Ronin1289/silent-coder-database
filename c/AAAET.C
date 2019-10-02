/**************************************************************************
*                                                                         *
*                                                                         *
*       print an array using pointers                                     *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int arr[2][3]={55,66,33,22,44,77};
clrscr();
for(i=0;i<2;i++)
{
 printf("\n\n");
 for(j=0;j<3;j++)
 {
  printf("%4d",*(*(arr+i)+j));
 }
}
getch();
}
