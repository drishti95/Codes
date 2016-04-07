#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct tree
{	struct tree *left;
     int x;
	struct tree *right;
}*root=NULL;
void insert(struct tree **,int);
void search(struct tree **,int);
void inorder(struct tree *);
void preorder(struct tree *);
void postorder(struct tree *);
void bfs(struct tree *);
void deq();
void enq(struct tree *);
struct node
{
    struct tree *qptr;
    struct node *link;
}*fr,*rear;
int main()
{
	int ch,n,a;

	while(1)
	{
        cout<<"\nBINARY SEARCH TREE\n";
		cout<<"1.Insert a node\n";
		cout<<"2.Breadth-First traversal\n";
		cout<<"3.Exit\n";
		cout<<"Enter your choice :\n";
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:cout<<"enter the data part\n";
			       scanf("%d",&n);
				 insert(&root,n);
					 break;
            case 2:cout<<"\n\nThe data in breadth-first traversal are:\n\n";
                   bfs(root);
                   break;
			case 3: exit(0);
			default:cout<<"\n\nInvalid choice!!!!!!";

		}
   	}
}
void insert(struct tree **ptr,int n)
{
	if(*ptr==NULL)
	{
	*ptr=(struct tree *)malloc(sizeof(struct tree));
	(*ptr)->x=n;
	(*ptr)->left=NULL;
	(*ptr)->right=NULL;
	return;
    }
    else
    {
      if(n>(*ptr)->x)
     insert(&((*ptr)->right),n);
     else
      insert(&((*ptr)->left),n);
    }
}

void bfs(struct tree *ptr)
{
    struct node *newptr = new struct node;
    newptr->qptr=ptr;
    fr=newptr;
    rear=newptr;
     while((fr->link)!=NULL)
     {
         if((fr->qptr)->left!=NULL)
         enq((fr->qptr)->left);
         if((fr->qptr)->right!=NULL)
         enq((fr->qptr)->right);
         deq();
     }
}

void enq(struct tree *ptr)
{
    struct node *newptr = new struct node;
    newptr->qptr=ptr;
    newptr->link=NULL;
    rear->link=newptr;
    rear=newptr;
}
void deq()
{
    cout<<(fr->qptr)->x<<"  ";
    fr=fr->link;
}
