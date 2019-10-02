/**************************************************************************
*                                                                         *
*           Enter a text in form of password and print it.                *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *f;
 char password[8];
 char ch;
 int i,n=0;
 f=fopen("password.txt","w");
 clrscr();
 printf("\nEnter password");
 for(i=0;i<8;i++)
 {
  ch=getch();
  printf("*");
  password[i]=ch;
  putc(ch,f);
 }
 password[i]=NULL;
 printf("\nTo printf password press  1\nTo exit press  2\n");
 printf("\nEnter your choice");
 scanf("%d",&n);
 fclose(f);
 f=fopen("password.txt","r");
 if(n==1)
 {
  while(ch!=EOF)
  {
   ch=getc(f);
   printf("%c",ch);
  }
 }
 getch();
}