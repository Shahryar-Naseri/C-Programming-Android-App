/* Sorting of data in Linked List */
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *ptr;
}list;
list *p;
main()
{
	int num,ch;
	char ans='y';
	void add(list *q,int num);
	void display(list *q);
	while(ans=='y')
	{
		printf("\nSelect operation\n1:Add\n2:Display\n\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nEnter number: ");
			scanf("%d",&num);
			add(p,num);
			break;
			case 2:
			display(p);
			break;
			default:
			printf("\nEnter valid vlue(1_2)");
		}
		printf("\n\nContinue?(Y/N): \n");
		ans=getch();
	}
	getch();
}
void add(list *q,int num)
{
	list *temp;
	if(p==NULL)
	{
		p=(list*)malloc(sizeof(list));
		p->data=num;
		p->ptr=NULL;
	}
	else
	{
		if(num<=p->data)
		{
			temp=(list*)malloc(sizeof(list));
			temp->data=num;
			temp->ptr=q;
			p=temp;
		}
		if(num>p->data)
		{
			while(q->ptr!=NULL)
			{
				if(num>=q->data&&num<q->ptr->data)
				{
					temp=(list*)malloc(sizeof(list));
					temp->data=num;
					temp->ptr=q->ptr;
					q->ptr=temp;
					break;
				}
				else
				q=q->ptr;
			}
			if(q->ptr==NULL)
			{
				q->ptr=(list*)malloc(sizeof(list));
				q->ptr->data=num;
				q->ptr->ptr=NULL;
			}
		}
	}
}
void display(list *q)
{
	printf("\nSorted Linked List:\n");
	printf("_____________________\n");
	while(q!=NULL)
	{
		printf("\n\t%d",q->data);
		q=q->ptr;
	}
	printf("\n_____________________");
}
