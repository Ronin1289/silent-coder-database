/**************************************************************************
*                                                                         *
*                             *                                           *
*                            * *                                          *
*  A program to print       * * *      for input=5                        *
*                          * * * *                                        *
*                         * * * * *                                       *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;
clrscr();
printf("Enter a number\n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf("\n");
 for(j=1;j<=n-i;j++)
 {
  printf(" ");
 }
 for(j=1;j<=i;j++)
 {
  printf("* ");
 }
}
getch();
}