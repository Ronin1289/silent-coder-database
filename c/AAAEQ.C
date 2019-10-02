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
 char str[20];
 int i,j,k,b,e;
 clrscr();
 printf("Enter a string");
 flushall();
 gets(str);
 puts(str);
 b=0;
 e=strlen(str)-1;
 while(b<=e)
 {
  if(str[b]==str[e])
  {
   b++;
   e--;
  }
  else
  {
   break;
  }
 }
 printf("\n B=%d",b);
 printf("\n E=%d",e);
 printf("\n");
 if(b==e)
 {
  printf("Palindrome");
 }
 else
 {
  printf("Not palindrome");
 }
 getch();
}