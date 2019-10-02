/**************************************************************************
*                                                                         *
*   A program tocount number of vovel in string                           *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,p,a=0;
char str[20],str1[10]={'a','e','i','o','u','A','E','I','O','U'};
clrscr();
printf("Enter a string");
flushall();
gets(str);
printf("\nEntered string\t");
puts(str);
for(i=0;i<20;i++)
{
 for(j=0;j<10;j++)
 {
  if(str[i]==str1[j])
  {
   a++;
  }
 }
}
printf("\n\nNumber of vovels=%d\n\n",a);
getch();
}
