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
 int i;
 struct node *next;
};
 typedef struct node node;
 node *start=NULL;

 void addbeg()
 {
  node *t;
  t=(node *)malloc(sizeof(node));
  if(t==NULL)
  {
   printf("Unable to create node");
  }
  else
  {
   printf("Enter the value of node");
   scanf("%d",&t->i);
   t->next=NULL;
   if(start==NULL)
   {
    start=t;
   }
   else
   {
    t->next=start;
    start=t;
   }
  }
 }
 void disp()
 {
  node *p;
  for(p=start;p!=NULL;p=p->next)
  {
   printf("%5d",p->i);
  }
 }
void main()
{
   int i;
   do
   {
    clrscr();
    printf("Enter your choice");
    scanf("%d",&i);
    if(i==1)
    {
     addbeg();
     printf("\n");
     disp();
    }
    else
    {
     break;
    }
    getch();
  }while(i!=0);
}
