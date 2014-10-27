/* Program to create, display and delete nodes from a queue */
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
void main()
{
	clrscr();
	int ch,n;
	char ans='y';
	void push(list *q,int n);
	void pop(list *q);
	void display(list *q);
	while(ans=='y')
	{
		printf("\nSelect option(1_3)");
		printf("\n1:Push\n2:Pop\n3:Display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("Enter number:");
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
			printf("Enter valid value(1_3)");
		}
		printf("\nWish to continue?(Y/N)");
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
	printf("Queue is empty");
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
	printf("Queue doesnot exist");
	else
	{
		while(q!=NULL)
		{
			printf("\t%d",q->data);
			q=q->ptr;
		}
	}
}