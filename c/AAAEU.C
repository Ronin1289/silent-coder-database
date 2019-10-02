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
int i,j,k,m;
char str[20];
char vovel[10]={'a','e','i','o','u','A','E','I','O','U'};
clrscr();
gets(str);
puts(str);
m=strlen(str);
printf("\n");
for(i=0;i<20;i++)
{
 for(j=0;j<10;j++)
 {
  if(str[i]==vovel[j])
  {
   for(k=m;k>=i;k--)
   {
    str[k+1]=str[k];
   }
   str[i]='*';
  }
 }
}
puts(str);
getch();
}
