/**************************************************************************
*         Number system converter                                         *
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
int i,j;
clrscr();
printf("WELCOME");
printf("\nChoose the numbering system of input");
printf("\n1-DECIMAL");
printf("\n2-BINARY");
printf("\n3-OCTAL");
printf("\n4-HEXADECIMAL\n");
scanf("%d",&i);
printf("\nChoose the numbering system of output");
printf("\n1-DECIMAL");
printf("\n2-BINARY");
printf("\n3-OCTAL");
printf("\n4-HEXADECIMAL\n");
scanf("%d",&j);
printf("%d%d",i,j);



if(i==1)
{
if(j==1)
{
printf("Error");
}
elseif(j==2)
{
}
elseif(j==3)
{
}
elseif(j==4)
{
}
}
elseif(i==2)
{
if(j==1)
{
}
elseif(j==2)
{
printf("Error");
}
elseif(j==3)
{
}
elseif(j==4)
{
}
}
elseif(i==3)
{
if(j==1)
{
}
elseif(j==2)
{
}
elseif(j==3)
{
printf("Error");
}
elseif(j==4)
{
}
}
elseif(i==4)
{
if(j==1)
{
}
elseif(j==2)
{
}
elseif(j==3)
{
}
elseif(j==4)
{
printf("Error");
}
}
else
{
printf("Error");
}
getch();
}
