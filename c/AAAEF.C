/**************************************************************************
*                                                                         *
*                  File handeling                                         *
*     Enter a character and store it in a file.                           *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f;
char ch;
clrscr();
 f=fopen("Abhi.txt","w");
 if(f==NULL)
 {
  printf("\nFailed to open file\n");
 }
 else
 {
  printf("\nFile opened correctly\n");
 }
 printf("Enter a character");
 flushall();
 scanf("%c",&ch);
 putc(ch,f);
 fclose(f);
 f= fopen("abhi.txt","r");
 ch=getc(f);
 printf("\n\n%c",ch);

getch();
}
