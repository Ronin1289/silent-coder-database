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
struct student
{
 int roll;
 char name[20];
 int class;
 char sec;
}st;
void main()
{
int i;
clrscr();
 printf("Enter student details\n");
 printf("Enter roll no.");
 scanf("%d",&st.roll);
 printf("Enter name ");
 flushall();
 gets(st.name);
 printf("Enter class ");
 scanf("%d",&st.class);
 flushall();
 printf("Enter section");
 scanf("%c",&st.sec);
 printf("Student detais\n");
 printf("Roll.no   Name                Class         section\n");
 printf("%-10d%-20s%-14d%-c",st.roll,st.name,st.class,st.sec);
getch();
}
