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
#include<alloc.h>
struct node
{
 int info;
 struct node *link;
};
struct node *first,*last;
void create()
{
 struct node *ptr,*cpt;
 char ch;
 ptr=(struct node*)malloc(sizeof(struct node));
 printf("Enter the value of first node");
 scanf("%d",&ptr->info);
 first=ptr;
 do
 {
  cpt=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the value of node");
  scanf("%d",&cpt->info);
  ptr->link=cpt;
  ptr=cpt;
  printf("\nTo add a node  press Y\nTo exit        press N");
  printf("\nEnter your choice");
  flushall();
  ch=getch();
 }while(ch=='y'||ch=='Y');
 ptr->link=NULL;
 last=ptr;
}
void disp()
   {
     struct node *p;
     printf("\n");
     for(p=first;p!=NULL;p=p->link)
     {
	printf("%5d",p->info);
     }
   }
void main()
{
clrscr();
create();
disp();
getch();
}
