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
struct date
{
 int dd;
 int mm;
 int yyyy;
};
struct student
{
 int rollno;
 char name[20];
 struct date dob;
};
void add()
{
 FILE *f;
 int *st;
 struct student s;
 scanf("%d",&s.rollno);
 flushall();
 st=&s;
 scanf("%d",&s.dob.dd);
 scanf("%d",&s.dob.mm);
 scanf("%d",&s.dob.yyyy);
 fopen("StudentData.txt","a+");
 fwrite(st,sizeof(s),1,*f);
}

void main()
{
int i,j,k;
clrscr();
printf("\n1...Add new student data");
printf("\n2...Delete student data");
printf("\n3...Edit student data");
printf("\n4...Display student data");
printf("\n5...Sort student data");
getch();
}
