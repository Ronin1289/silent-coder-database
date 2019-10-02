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
  clrscr();
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
    getch();
   }
void addbeg()
{
 struct node *p;
 p=(struct node *)malloc(sizeof(struct node));
 printf("Enter the value of node");
 scanf("%d",&p->info);
 p->link=first;
 first=p;
}
void addend()
{
 struct node *p;
 p=(struct node *)malloc(sizeof(struct node));
 printf("Enter the value of node");
 scanf("%d",&p->info);
 last->link=p;
 p->link=NULL;
 last=p;
}
void search()
{
 int n,i=1;
 struct node *p;
 printf("Enter the search element");
 scanf("%d",&n);
 for(p=first;p!=NULL;p=p->link)
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
  for(p=first;p!=NULL;p=p->link)
  {
   if(p->info==d)
    {
     temp=(struct node*)malloc(sizeof(struct node));
     printf("Enter the value of new node");
     scanf("%d",&temp->info);
     temp->link=p->link;
     p->link=temp;
     break;
    }
  }
  getch();
 }
 else
 {
  struct node *p,*temp;
  printf("\n");
  for(p=first;p!=NULL;p=p->link)
  {
   if(p->info==d)
    {
     temp=(struct node*)malloc(sizeof(struct node));
     temp->info=p->info;
     printf("Enter the value of new node");
     scanf("%d",&p->info);
     temp->link=p->link;
     p->link=temp;
     break;
    }
  }
  getch();
 }
}
void delete_beg()
{
 struct node *p;
 p=first->link;
 free(first);
 first=p;
 printf("Node deleted");
 getch();
}
void delete_end()
{
 struct node *p;
 for(p=first;(p->link)!=last;p=p->link)
 {
 }
 free(last);
 p->link=NULL;
 last=p;
 printf("node deleted");
 getch();
}
void delete_a_node()
{
 struct node *p,*ptr;
 int n;
 printf("Enter the velue of node");
 scanf("%d",&n);
 for(p=first;(p->info)!=n;p=p->link)
 {
  ptr=p;
 }
 ptr->link=p->link;
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
