/**************************************************************************
*                                                                         *
*                  File handeling                                         *
*                                                                         *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
 char password[8];
 char ch;
 int i,n=0;
 clrscr();
 printf("\nEnter password");
 for(i=0;i<8;i++)
 {
  ch=getch();
  printf("*");
  password[i]=ch;
 }
 password[i]=NULL;
 printf("\nTo printf password press  1\nTo exit press  2\n");
 printf("\nEnter your choice");
 scanf("%d",&n);
 switch(n)
 {
  case 1:printf("\n%s",password);break;
  default:break;
 }
 getch();
}
