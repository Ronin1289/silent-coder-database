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
int i,num,dnum,n;
float s,t;
s=0;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 num=1;
 dnum=i;
 t=(float)num/dnum;
 s=s+t;
}
printf("%f",s);
getch();
}