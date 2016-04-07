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
int main()
{
	int ch,n,a;

	while(1)
	{
        cout<<"\nBINARY SEARCH TREE\n";
		cout<<"1.Insert a node\n";
		cout<<"2.Inorder display\n";
		cout<<"3.Preorder display\n";
		cout<<"4.Postorder display\n";
		cout<<"5.Search a node\n";
		cout<<"6.Exit\n";
		cout<<"Enter your choice :\n";
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:cout<<"enter the data part\n";
			       scanf("%d",&n);
				 insert(&root,n);
					 break;

			case 2:

					cout<<"\n\nThe data in inorder traversal are : \n\n";
				   inorder(root);
					break;
			case 3:

					cout<<"\n\nThe data in preorder traversal are : \n\n";
					preorder(root);
					break;
			case 4:

					cout<<"\n\nThe data in postorder traversal are : \n\n";
					postorder(root);
					break;
			case 5:cout<<"Enter the data to be searched\n";
			       scanf("%d",&a);
                   search(&root,a);
			       break;
			case 6:
					exit(0);
			default:
					cout<<"\n\nInvalid choice!!!!!!";

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
void search(struct tree **ptr,int n)
{if(*ptr!=NULL)
 { if((*ptr)->x==n)
  cout<<"element is found";
  else
  { if(n>(*ptr)->x)
   search(&(*ptr)->right,n);
   else
   search(&(*ptr)->left,n);
  }
 }
 else
 cout<<"element not found\n";
}
void inorder(struct tree *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		cout<<ptr->x;
		inorder(ptr->right);
	}
}
void preorder(struct tree *ptr)
{
	if(ptr!=NULL)
	{
		cout<<ptr->x;
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void postorder(struct tree *ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->x;
	}
}




