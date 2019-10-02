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
struct node
{
 int info;
 struct node *link;
};
struct node *start=NULL;
void push()
{
 struct node *ptr,*cpt;
 ptr=(struct node *)malloc(sizeof(struct node));
 printf("\nEnter the data of node");
 scanf("%d",&ptr->info);
 ptr->link=NULL;
 if(start==NULL)
 {
  start=ptr;
 }
 else
 {
  ptr->link=start;
  start=ptr;
 }
 getch();
}
void pop()
{
 struct node *ptr;
 ptr=start->link;
 printf("Poped element is=%d",start->info);
 free(start);
 start=ptr;
 getch();
}
void disp()
{
 struct node *ptr;
 printf("Start=%d",start->info);
 for(ptr=start;ptr!=NULL;ptr=ptr->link)
 {
  printf("%5d",ptr->info);
 }
 getch();
}
void main()
{
char i;
clrscr();
do
{
 printf("1....Push\n2....Pop\n3.....Display\n4.....Exit");
 i=getch();
 switch(i)
 {
  case '1':push();break;
  case '2':pop();break;
  case '3':disp();break;
  default:break;
 }
 clrscr();
}while(i!='4');
getch();
}
