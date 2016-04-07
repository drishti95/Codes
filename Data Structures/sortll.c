#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};
struct node *create_list(struct node *start );
void display(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
void selection(struct node *start);
struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;

	printf("Enter the element to be inserted : ");
	scanf("%d",&data);
	start=addatbeg(start,data);

	for(i=2;i<=n;i++)
	{
		printf("Enter the element to be inserted : ");
		scanf("%d",&data);
		start=addatend(start,data);
	}
	return start;
}/*End of create_list()*/

void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
	p=start;
	printf("List is : ");
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n");
}/*End of display() */

struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}/*End of addatbeg()*/

struct node *addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}/*End of addatend()*/

void selection(struct node *start )
{
	struct node *p, *q;
	int tmp;
	p=start;
	while(p->link!=NULL)
	{
	q=p->link;
	while(q!=NULL)
	{
	if(p->info > q->info )
			{
				tmp=p->info;
				p->info=q->info;
				q->info=tmp;
			}
	q=q->link;
	}
	p=p->link;
	}

}/*End of selection( )*/

int main()
{
	int choice;
	struct node *start=NULL;
	while(1)
	{
		printf("1.Create List\n");
		printf("2.Display\n");

		printf("3.Selection Sort\n");

		printf("4.Quit\n\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			start=create_list(start);
			break;
		 case 2:
			display(start);
			break;
		 case 3:
			selection(start);
			break;

		 case 4:
			 exit(1);
		 default:
			printf("Wrong choice\n\n");
		}/*End of switch */
	}/*End of while */
	return 0;
}/*End of main()*/
