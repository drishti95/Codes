#include<stdio.h>
#include<stdlib.h>

void create();
void insertatbeg();
void insertatany();
void display();
void deleteatany();
void average();
void maximum();
void sorting();
void reversal();

struct node
{
    int data;
    struct node *link;
}*start=NULL;

int main()
{
    int ch;
    do
    {
        printf("What do you want to do?\n1.Create\n2.Insert at beginning\n3.Insert at any position\n4.Delete at any position\n5.Find average\n6.Find maximum\n7.Sorting\n8.Reverse\n9.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:create();display();break;
        case 2:insertatbeg();display();break;
        case 3:insertatany();display();break;
        case 4:deleteatany();display();break;
        case 5:average();display();break;
        case 6:maximum();display();break;
        case 7:sorting();display();break;
        case 8:reversal();display();break;
        case 9:exit(0);break;
        default:printf("Wrong choice\n");
        }
    }while(ch);
    return 0;

}

void create()
{
    int c;
    do
    {
        struct node *newnode=(struct node*)malloc(sizeof(struct node*)),*temp;
        if(!newnode)
            printf("Memory allocation error\n");
        printf("Enter data\n");
        scanf("%d",&newnode->data);
        newnode->link=NULL;
        if(start==NULL)
        {
           start=newnode;
           temp=newnode;
        }
        else
        {
            temp->link=newnode;
            temp=newnode;
        }
        printf("Do you want to continue?(0/1)\n");
        scanf("%d",&c);
    }while(c==1);
}

void display()
{
    struct node *temp=start;
    printf("The linked list is\n");
    //temp=start;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
    printf("\n");
}

void insertatbeg()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node*));
    if(!newnode)
            printf("Memory allocation error\n");
   // struct node *temp;
    printf("Enter data\n");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    if(start==NULL)
    {
        start=newnode;
        //temp=newnode;
    }
    else
    {
        newnode->link=start;
        start=newnode;
    }
}

void insertatany()
{
    int pos,i=0,c=0;
    struct node *newnode=(struct node*)malloc(sizeof(struct node*)),*temp;
    if(!newnode)
            printf("Memory allocation error\n");
    printf("Enter the number to insert\n");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    printf("Enter at which position you want to enter\n");
    scanf("%d",&pos);

    temp=start;
    while(temp!=NULL)
    {
        temp=temp->link;
        c++;
    }
    if(pos<0||pos>c)
    {
        printf("Invalid position\n");
        return;
    }
    else
    {
        temp=start;
         while(i<(pos-1)&&temp!=NULL)
    {
        temp=temp->link;
        i++;
    }
    if(pos==1)
        insertatbeg();
    else if(temp!=NULL)
    {
        newnode->link=temp->link;
        temp->link=newnode;
    }
    if(temp==NULL)
        printf("Insertion is impossible\n");

    }
}

void deleteatany()
{
    int i=0,pos,c=0;
    struct node *temp,*temp1,*s=start;
    printf("Enter position you want to delete\n");
    scanf("%d",&pos);
    while(s!=NULL)
    {
        c++;
        s=s->link;
    }
    if(pos<0||pos>c)
    {
        printf("Invalid position\n");
        return;
    }
    else if((pos==1)&&(start!=NULL))
    {
        temp=start;
        start=temp->link;
        free(temp);
    }
    else
    {
        temp=start;
        while(i<(pos-1)&&temp!=NULL)
        {
            temp1=temp;
            temp=temp->link;
            i++;
        }
        if(temp!=NULL)
        {
           temp1->link=temp->link;
           free(temp);
        }

    }

}

void average()
{
    struct node *temp=start;
    int i=0;
    float sum=0;
    if(start!=NULL)
    {
        while(temp!=NULL)
        {
            sum=sum+temp->data;
            temp=temp->link;
            i++;
        }
        printf("The average is %f\n",sum/i);
    }
    else printf("Average cannot be found\n");

}

void maximum()
{
    struct node *temp=start;
    int max;
    if(start!=NULL)
    {
        max=start->data;
        while(temp!=NULL)
        {
           if(temp->data>max)
                max=temp->data;
           temp=temp->link;
        }
        printf("The maximum is %d\n",max);
    }
    else printf("Maximum cannot be found\n");
}

void sorting()
{
    struct node *p,*t;
    int temp;
    t=start;
    if(start!=NULL)
    {
        while(t!=NULL)
        {
            p=start;
            while(p->link!=NULL)
            {
                if(p->data>p->link->data)
                {
                    temp=p->data;
                    p->data=p->link->data;
                    p->link->data=temp;
                }
                p=p->link;
            }
            t=t->link;
        }
        printf("After sorting\n");
    }
    else
        printf("Sorting not possible\n");
}

void reversal()
{
    struct node *p1,*p2,*p3;
    p1=start;
    if(start!=NULL)
    {
        p2=p1->link;
        p3=p2->link;
        p1->link=NULL;
        p2->link=p1;
        while(p3!=NULL)
        {
            p1=p2;
            p2=p3;
            p3=p3->link;
            p2->link=p1;
        }
        start=p2;
        printf("After reversal\n");
    }
    else
        printf("The reversal is not possible\n");
}
