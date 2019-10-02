/**************************************************************************
*                                                                         *
*                                                                         *
*    doubly link list                                                     *
*                                                                         *
*                                                                         *
*                                                                         *
**************************************************************************/
#include<stdio.h>
#include<conio.h>
struct node
{
 int info;
 struct node *prev;
 struct node *next;
};
struct node *first,*last;
void create()
{
 struct node *ptr,*cpt;
 char ch;
 ptr=(struct node *)malloc(sizeof(struct node));
 printf("Enter the value of first node");
 scanf("%d",&ptr->info);
 first->prev=NULL;
 first=ptr;
 do
 {
  cpt->prev=ptr;
  cpt=(struct node *)malloc(sizeof(struct node));
  printf("Enter the value of node");
  scanf("%d",&cpt->info);
  ptr->next=cpt;
  ptr=cpt;
  ptr->next=NULL;
  printf("Enter y to add");
  ch=getch();
 }while(ch=='y');
 last=ptr;
}
void disp()
{
 struct node *p;
 for(p=first;p!=NULL;p=p->next)
 {
  printf("%d",p->info);
 }
}
void traverse()
{
 struct node *p;
 printf("\n\n");
 for(p=last;p!=NULL;p=p->prev)
 {
  printf("%5d",p->info);
 }
}


void main()
{
clrscr();
create();
disp();
traverse();
getch();
}
