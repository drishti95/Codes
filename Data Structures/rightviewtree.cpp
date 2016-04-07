#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *left,*right;
};

struct node *newNode(int n)
{
struct node * temp= new struct node;
temp->data=n;
temp->left=NULL;
temp->right=NULL;
return temp;
}

struct node **createQueue()
{
struct node **qu=(struct node **)malloc(sizeof(struct node *)*100);
return qu;
}

void enqueue(struct node **qu,struct node *newn,int *rear)
{
qu[*rear]=newn;
(*rear)++;
}

struct node *dequeue(struct node **qu,int *fr)
{
(*fr)++;
return qu[*fr-1];
}


void rightView(struct node *root)
{
int flag;
int fr=0,rear=0;
struct node **q=createQueue();
struct node *dummy = newNode(-999);

enqueue(q,dummy,&rear);
struct node *tempnode=root;

while(tempnode)
{
if(tempnode->left)
enqueue(q,tempnode->left,&rear);
if(tempnode->right)
enqueue(q,tempnode->right,&rear);
struct node *prevNode= tempnode;
tempnode=dequeue(q,&fr);
if(tempnode==dummy)
{
enqueue(q,dummy,&rear);
cout<<prevNode->data;
tempnode=dequeue(q,&fr);
}
}
}

int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);

  printf("Right View of binary tree is \n");
  rightView(root);
  return 0;
}
