/**************************************************************************
* DECIMAL TO BINARY,OCTAL AND HEXADECIMAL CONVERTER                       *
*                                                                         *
*                                                                         *
*                                     UNFININISHED                        *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,j,k,n;
clrscr();
printf("\n\nEnter the value=");
scanf("%d",&i);
printf("To convert into octal Enter-1 \nTo convert into hexadecimal Enter-2\nTo convert into binary Enter-3 ");
scanf("%d",&j);
if(j==1)
{
   printf("\n\nEntered value in octal is=%#o",i);
}
else if(j==2)
{
   printf("\n\nEntered value in hexadecimal is=%#x",i);
}
else if(j==3)
{
  n=0;
  while(i>0)
  {
    k=(i%2);
    printf("%d",k);
    n=n/2;
  }
}
else
{
printf("Error 404");
}
getch();
}