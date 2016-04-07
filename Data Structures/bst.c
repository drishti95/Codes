#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* llink;
struct node* rlink;
}*temp=NULL;
struct node* create();
void preorder(struct node*);
void postorder(struct node*);
void inorder(struct node*);
void insert();
void main()
{
int ch,k;
do
{
printf("1.insert\n 2.preorder\n 3.postorder\n 4.inorder\n 5.exit\n enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1: insert();
break;
case 2:preorder(temp);
break;
case 3:postorder(temp);
break;
case 4:inorder(temp);
break;
case 5:exit(0);break;
default:printf("invalid chooice");
}
printf("do u wnt to cntinue 1/0");
scanf("%d",&k);
}while(k);
}
struct node* create()
{
int n;
struct node* newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&n);
newnode->data=n;
newnode->llink=NULL;
newnode->rlink=NULL;
return(newnode);
}
void insert()
{
struct node* newnode;
struct node* root=temp;;
if(root==NULL)
{
temp=create();
root=temp;
}
else
{
newnode=create();
while(1)
{
if(newnode->data<root->data)
{
if(root->llink==NULL)
{
root->llink=newnode;
break;
}
root=root->llink;
}
if(newnode->data>root->data)
{
if(root->rlink==NULL)
{
root->rlink=newnode;
break;
}
root=root->rlink;
}}}
}
void postorder(struct node *temp)
{
if(temp!=NULL)
{
postorder(temp->llink);
postorder(temp->rlink);
printf("%d",temp->data);
}}
void preorder(struct node *temp)
{
if(temp!=NULL)
{
printf("%d",temp->data);
preorder(temp->llink);
preorder(temp->rlink);
}}
void inorder(struct node* temp)
{
if(temp!=NULL)
{
inorder(temp->llink);
printf("%d",temp->data);
inorder(temp->rlink);
}}
