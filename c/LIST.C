#include<stdio.h>
#include<conio.h>
struct node
{
   int i;
   struct node *next;
};
typedef struct node node;
node *start =NULL;

// Function to add a node at beg
  void addbeg()
  {
     node *t;
     t=(node *) malloc(sizeof(node));
     if(t==NULL)
     {
	printf("\n\n Fail to create the node ");
     }
     else
     {
	 printf("\n Enter the value of the node");
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

   // Function to add a node at last
  void addlst()
  {
     node *t,*p;
     t=(node *) malloc(sizeof(node));
     if(t==NULL)
     {
	printf("\n\n Fail to create the node ");
     }
     else
     {
	 printf("\n Enter the value of the node");
	 scanf("%d",&t->i);
	 t->next=NULL;
	 if(start==NULL)
	 {
	   start=t;
	 }
	 else
	 {
	     for(p=start;p->next!=NULL;p=p->next){}
	     p->next=t;
	 }
     }

   }


    // Function to add a node at mid before
  void addmdb()
  {
     node *t,*p;
     int srno;
     t=(node *) malloc(sizeof(node));
     if(t==NULL)
     {
	printf("\n\n Fail to create the node ");
     }
     else
     {
	 printf("\n Enter the value of the node");
	 scanf("%d",&t->i);
	 t->next=NULL;
	 if(start==NULL)
	 {
	   start=t;
	 }
	 else
	 {
	     printf("\n\n\n\n Enter search number");
	     scanf("%d",&srno);
	     for(p=start;p->next->i!=srno&& p!=NULL;p=p->next){}
	     if(p==NULL)
		printf("\n\n Search number not found");
	     else
	       {
		 t->next=p->next;
		 p->next=t;
	       }
	 }
     }
   }

    // Function to add a node at mid after
  void addmdaf()
  {
     node *t,*p;
     int srno;
     t=(node *) malloc(sizeof(node));
     if(t==NULL)
     {
	printf("\n\n Fail to create the node ");
     }
     else
     {
	 printf("\n Enter the value of the node");
	 scanf("%d",&t->i);
	 t->next=NULL;
	 if(start==NULL)
	 {
	   start=t;
	 }
	 else
	 {
	     printf("\n\n\n\n Enter search number");
	     scanf("%d",&srno);
	     for(p=start;p->i!=srno&& p!=NULL;p=p->next){}
	     if(p==NULL)
		printf("\n\n Search number not found");
	     else
	       {
		 t->next=p->next;
		 p->next=t;
	       }
	 }
     }
   }



   // Function to display the list
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
   int ans;
  do
  {
    clrscr();
    printf("\n\n 1......... Add a new node at beg");
    printf("\n 2......... Add a new node at last");
    printf("\n 3......... Add a new node at mid before");
    printf("\n 4......... Add a new node at mid after");
    printf("\n 5......... Display the list");
    printf("\n 9......... Exit");
    printf("\n\n Enter your choice");
    scanf("%d",&ans);
    switch(ans)
    {
      case 1: addbeg();break;
      case 2: addlst();break;
      case 3: addmdb();break;
      case 4: addmdaf();break;
      case 5: disp();break;
    }
    getch();
  }while(ans!=9);

   getch();
}