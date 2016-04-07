#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *rlink;
struct node *llink;
}*tmp=NULL,*tmp2=NULL,*tmp3=NULL;

typedef struct node NODE;

NODE *create();

void inorder(NODE *);
void insert(NODE *);
void t_cpy(NODE *,NODE *);

int main()
{

int n,m;
do
{
    printf("\n1.create tree 1\n2.Insert element to tree1\n3.create tree 2\n4.Insert element to tree2\n5.Inorder tree1\n6.Inorder tree2\n7.Copy tree2 to tree1\n8.exit\n\n");
    printf("\nEnter ur choice: ");
    scanf("%d",&m);
    switch(m)
    {
        case 1: tmp=create();
                break;
        case 2: insert(tmp);
                break;
        case 3: tmp2=create();
                break;
        case 4:
                insert(tmp2);
                break;
        case 5: printf("\n\nInorder Tree1: ");
                inorder(tmp);
                break;
        case 6: printf("\n\nInorder Tree 2: ");
                inorder(tmp2);
                break;
        case 7: t_cpy(tmp,tmp2);

                break;
        case 8: return(0);
    }
}while(n!=8);
return(0);
}
void insert(NODE *root)
{
    NODE *newnode;
    if(root==NULL)
    {
        newnode=create();
        root=newnode;
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
            }
        }
    }
}

NODE *create()
{
    NODE *newnode;
    int n;
    newnode=(NODE *)malloc(sizeof(NODE));
    printf("\n\nEnter the Data ");
    scanf("%d",&n);
    newnode->data=n;
    newnode->llink=NULL;
    newnode->rlink=NULL;
return(newnode);
}


void t_cpy(NODE *t1,NODE *t2)
{
    int val,opt=0;
    NODE *temp;
    if(t1==NULL || t2==NULL)
    {
        printf("Can not copy !\n");
    }
    inorder(t1);

    printf("\nEnter the node value where tree 2 should be copied\n");
    scanf("%d",&val);
    temp=t1;
    while(temp!=NULL&&temp->data!=val)
{
    if(val<temp->data)
        temp=temp->llink;
    else
        temp=temp->rlink;
        }
    if(temp->llink==NULL && temp->rlink==NULL && temp->data!=val)
    {
        printf("Invalid Node value entered !\n");
        break;

    }

    if(temp->llink!=NULL || temp->rlink!=NULL)
        printf("Not possible to copy tree to this node\n");
    else
    {
        printf("Copy tree to \n 1.Left Node \n 2.Right Node\n Enter your choice : ");
        scanf("%d",&opt);
        if(opt==1)
        {
            temp->llink=t2;
        }
        else if(opt==2)
        {
            temp->rlink=t2;
        }
        else
            printf("Invalid choice\n");
    }
    printf("Tree1 after copying is\n");
    inorder(temp);
}


void inorder(NODE *tmp)
{
    if(tmp!=NULL)
    {
        inorder(tmp->llink);
        printf("%d",tmp->data);
        inorder(tmp->rlink);
    }
}
