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
struct node *first,*last;
void create()
{
 char ch;
 struct node *ptr,*cpt;
 cpt=(struct node*)malloc(sizeof(struct node));
 printf("Enter the info of first node");
 scanf("%d",&cpt->info);
 first=cpt;


 do
 {
  ptr=(struct node*)malloc(sizeof(struct node));
 printf("Enter the info of node");
 scanf("%d",&ptr->info);
 cpt->link=ptr;
 cpt=ptr;
 printf("Y To add a node/nN to exit\n");
  ch=getch();

 }while((ch=='y')||(ch=='Y'));
 ptr->link=NULL;
 last=ptr;
}
void disp()
{
 struct node *p;
 for(p=first;p!=NULL;p=p->link)
 {
  printf("%5d",p->info);
 }
}
void main()
{
clrscr();
create();disp();
getch();
}
