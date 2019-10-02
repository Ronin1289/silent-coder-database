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
float sum(int,int);
float s;
int dnum;
clrscr();
printf("1+ 1/2 + 1/3 + 1/4 +..........n");
printf("\nEnter denominator of Nth term");
scanf("%d",&dnum);
s=sum(1,dnum);
printf("%f",s);
getch();
}
float sum(int a,int b)
{
 float s,t;
 int i;
 s=0;
 for(i=1;i<=b;i++)
 {
  t=(float) 1/i;
  s=s+t;
 }
 return s;
}