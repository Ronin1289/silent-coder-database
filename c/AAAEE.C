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
int *p,i,j,*q;
char ch;
clrscr();
p=&i;
q=&j;
printf("Enter i=");
scanf("%d",&i);
printf("Enter j=");
scanf("%d",&j);
printf("Enter the operation:");
flushall();
scanf("%c",&ch);
printf("\n");
switch(ch)
{
 case '+':printf("i+j=%d",(*p)+(*q));break;
 case '*':printf("i*j=%d",(*p)*(*q));break;
 case '-':printf("i-j=%d",(*p)-(*q));break;
 case '/':printf("i/j=%d",(*p)/(*q));break;
 default:printf("Invalid entry");
}
getch();
}
