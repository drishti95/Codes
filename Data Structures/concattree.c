/*P6.3 Recursive operations in Binary Search Tree*/
#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *lchild;
	int info;
	struct node *rchild;
};


struct node *insert(struct node *ptr, int ikey);
void preorder(struct node *ptr,struct node *ptr1);
void inorder(struct node *ptr);
int main()
{
	struct node *root1=NULL,*root2=NULL;
	int choice,k,l=1;
	char ch='Y';
	printf("Enter the first BST\n");
	
	while(ch=='y'||ch=='Y')
	{
		printf("Enter node\n");
		scanf("%d",&k);
		root1=insert(root1,k);
		printf("Want to enter more\n");
		scanf(" %c",&ch);
	}
	ch='Y';
	printf("Enter the second bst\n");
	while(ch=='y'||ch=='Y')
	{   
		printf("Enter node\n");
		scanf("%d",&k);
		root2=insert(root2,k);
		printf("Want to enter more\n");
		scanf(" %c",&ch);
	}
	printf("the first tree is\n");
	inorder(root1);
	printf("\n");
		printf("the seocnd tree is\n");
	inorder(root2);
	printf("\n");
	
	preorder(root1,root2);
	printf("the concated tree is \n");
	inorder(root1);
	return 0;
}
struct node *insert(struct node *ptr, int ikey )
{
	if(ptr==NULL)	
	{
		ptr = (struct node *) malloc(sizeof(struct node));
		ptr->info = ikey;
		ptr->lchild = NULL;
		ptr->rchild = NULL;
	}
	else if(ikey < ptr->info)	/*Insertion in left subtree*/
		ptr->lchild = insert(ptr->lchild, ikey);
	else if(ikey > ptr->info)	/*Insertion in right subtree */
		ptr->rchild = insert(ptr->rchild, ikey);  
	else
		printf("Duplicate key\n");
	return ptr;
}/*End of insert( )*/
void preorder(struct node *root1,struct node *root2)
{
	if(root2 == NULL )	/*Base Case*/
		return;
	root1=insert(root1,root2->info);
	preorder(root1,root2->lchild);
	preorder(root1,root2->rchild);
}/*End of preorder( )*/
void inorder(struct node *ptr)
{
	if(ptr == NULL )/*Base Case*/
		return;
	inorder(ptr->lchild);
	printf("%d  ",ptr->info);
	inorder(ptr->rchild);
}/*End of inorder( )*/

	

        
