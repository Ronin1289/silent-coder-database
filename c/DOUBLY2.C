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
#include<list.h>
struct node
{
 int info;
 struct node *prev;
 struct node *next;
};
struct node *first,*last;
/*void disp()
   {
     struct node *p;
     printf("\n");
     for(p=first;p!=NULL;p=p->next)
     {
	printf("%5d",p->info);
     }
    getch();
   }*/

/* traversing from end to begining*/

void disp()
{
 struct node *p;
 printf("\n");
 for(p=last;p!=NULL;p=p->prev)
 {
  printf("%5d",p->info);
 }
 getch();
}

void addbeg()
{
 struct node *p;
 disp();
 p=(struct node *)malloc(sizeof(struct node));
 printf("Enter the value of node");
 scanf("%d",&p->info);
 p->next=first;
 first->prev=p;
 first=p;
 first->prev=NULL;
}
void addend()
{
 struct node *p;
 p=(struct node *)malloc(sizeof(struct node));
 printf("Enter the value of node");
 scanf("%d",&p->info);
 last->next=p;
 p->prev=last;
 p->next=NULL;
 last=p;
}
void search()
{
 int n,i=1;
 struct node *p;
 printf("Enter the search element");
 scanf("%d",&n);
 for(p=first;p!=NULL;p=p->next)
 {
  if(p->info==n)
  {
   printf("\nElement found at %d",i);
  }
  else
  {
   i++;
  }
 }
 getch();
}
void add_at_a_node()
{
 int n=0,d;
 printf("1.....Add after the node\n2.....Add before the node");
 while((n!=1)&&(n!=2))
 {
  printf("\nEnter your choice");
  scanf("%d",&n);
 }
 printf("Enter the value of node");
 scanf("%d",&d);
 if(n==1)
 {
  struct node *p,*temp;
  printf("\n");
  for(p=first;p!=NULL;p=p->next)
  {
   if(p->info==d)
    {
     temp=(struct node*)malloc(sizeof(struct node));
     printf("Enter the value of new node");
     scanf("%d",&temp->info);
     temp->next=p->next;
     temp->prev=p;
     p->next=temp;
     break;
    }
  }
  getch();
 }
 else
 {
  struct node *p,*temp;
  printf("\n");
  for(p=first;p!=NULL;p=p->next)
  {
   if(p->info==d)
    {
     temp=(struct node*)malloc(sizeof(struct node));
     printf("Enter the value of new node");
     scanf("%d",&temp->info);
     temp->next=p->next;
     temp->prev=p;
     p->next=temp;
     break;
    }
  }
  getch();
 }
}
void delete_beg()
{
 struct node *p;
 p=first->next;
 p->prev=NULL;
 free(first);
 first=p;
 printf("Node deleted");
 getch();
}
void delete_end()
{
 struct node *p;
 for(p=first;(p->next)!=last;p=p->next)
 {
 }
 free(last);
 p->next=NULL;
 last=p;
 printf("node deleted");
 getch();
}
void delete_a_node()
{
 struct node *p,*ptr;
 int n;
 printf("Enter the value of node");
 scanf("%d",&n);
 for(p=first;(p->info)!=n;p=p->next)
 {
  ptr=p;
 }
 ptr->next=p->next;
 ptr->prev=p->prev;
 free(p);
 printf("Node deleted");
 getch();
}
void main()
{
 int n;
 clrscr();

 while(n!=0)
 {
  clrscr();
  printf("1.....Create\n2.....Add at begining\n3.....Add at end\n4.....Add at a node\n5.....Display\n6.....Search\n7.....Delete from begining\n8.....Delete from end\n9.....Delete a node\n0.....Exit\n");
  scanf("%d",&n);
  switch(n)
  {
   case 1:create();break;
   case 2:addbeg();break;
   case 3:addend();break;
   case 4:add_at_a_node();break;
   case 5:disp();break;
   case 6:search();break;
   case 7:delete_beg();break;
   case 8:delete_end();break;
   case 9:delete_a_node();break;
   default:clrscr();break;
  }
 }
}
