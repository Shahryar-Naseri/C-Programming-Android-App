/* Program to create, display and delete nodes from a Queue */
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *ptr;
}list;
list *p,*q;
main()
{
	int ch,n;
	char ans='y';
	void push(list *q,int n);
	void pop(list *q);
	void display(list *q);
	while(ans=='y')
	{
		printf("\nSelect option(1_3)");
		printf("\n1:Push\n2:Pop\n3:Display\n\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nEnter number: ");
			scanf("%d",&n);
			push(p,n);
			break;
			case 2:
			pop(p);
			break;
			case 3:
			display(p);
			break;
			default:
			printf("\nEnter valid value(1_3)");
		}
		printf("\n\nWish to continue?(Y/N) \n");
		ans=getch();
	}
	getch();
}
void push(list *q,int n)
{
	if(p==NULL)
	{
		p=(list*)malloc(sizeof(list));
		p->data=n;
		p->ptr=NULL;
	}
	else
	{
		while(q->ptr!=NULL)
		q=q->ptr;
		q->ptr=(list*)malloc(sizeof(list));
		q->ptr->data=n;
		q->ptr->ptr=NULL;
	}
}
void pop(list *q)
{
	list *temp;
	if(p==NULL)
	printf("\nQueue is empty");
	else
	{
		temp=q->ptr;
		free(q);
		p=temp;
	}
}
void display(list *q)
{
	if(p==NULL)
	printf("\nQueue doesnot exist");
	else
	{
		while(q!=NULL)
		{
			printf("\t%d",q->data);
			q=q->ptr;
		}
	}
}
