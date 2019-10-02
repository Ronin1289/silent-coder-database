/**************************************************************************
*                                                                         *
*   A program to insert * after each vovel in string                      *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()                                 //not working
{
int i,j,k,p,a;
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
 {                                        //not working
  if(str[i]==str1[j])
  {
   p=i;
   a=sizeof(str);
   for(k=a;k>p;k--)
   {
    str[k]=str[k-1];
   }                                      //not working
   str[p-1]='*';
  }
 }
}
printf("\n\n%d\n\n",a);
printf("\nString after processing->\t");
for(i=0;i<20;i++)
{
 printf("%c",str[i]);
}

getch();
}
