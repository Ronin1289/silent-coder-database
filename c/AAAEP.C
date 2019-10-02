/**************************************************************************
*                                                                         *
*                                                                         *
*                                unfinished                               *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
 char str[20];
 int i,j,k;
 clrscr();
 printf("Enter a string");
 flushall();
 gets(str);
 puts(str);
 i=strlen(str);
 j=0;
 for(i=0;i<20;i++)
 {

  if(str[i]=='\0')
  {
   break;
  }
  j++;
 }
 printf("\nLength by function%d",i);
 printf("\nLength%d",j);

 getch();
}