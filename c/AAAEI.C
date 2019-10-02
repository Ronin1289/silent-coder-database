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
}
int main()
{
struct student st[10];
int i;
clrscr();
for(i=0;i<5;i++)
{
 printf("Enter student details");
 printf("Enter roll no.");
 scanf("%d",&st->roll[i]);
 printf("Enter name ");
 gets(st.name[i]);
 printf("Enter class ");
 scanf("%d",&st->class[i]);
 printf("Enter section");
 scanf("%c",&st->sec[i]);
}
for(i=0;i<5;i++)
{
 printf("Student details");
 printf("Roll.no   Name                Class         section");
 printf("%-10d%-10s%-14c%-d",st.roll[i],st.name[i],st.class[i],st.sec[i]);
}
getch();
return 0;
}
