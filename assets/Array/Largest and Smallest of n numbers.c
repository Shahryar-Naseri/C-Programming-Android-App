/* Program to find Largest and Smallest of n numbers */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n[20],large,small,i,op,range;
	char ans='y';
	while(ans=='y')
	{
		printf("\nLargest and Smallest of n numbers");
		printf("\n\nMenu:");
		printf("\n\n1:Largest");
		printf("\n2:Smallest");
		printf("\nSelect the option(1-2): ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("Enter range: ");
			scanf("%d",&range);
			if(range>=20)
			{
				printf("Enter the valid range(1 to 20)");
				printf("\nEnter range: ");
				scanf("%d",&range);
			}
			printf("Enter the elements:\n\n");
			for(i=0;i<range;i++)
			{
				scanf("%d",&n[i]);
			}
			large=n[0];
			for(i=1;i<range;i++)
			{
				if(large<n[i])
				{
					large=n[i];
				}
			}
			printf("\nThe largest value is %d",large);
			break;
			case 2:
			printf("Enter range: ");
			scanf("%d",&range);
			if(range>=20)
			{
				printf("Enter the valid range");
				printf("\nEnter range: ");
				scanf("%d",&range);
			}
			printf("Enter the elements:\n\n");
			for(i=0;i<range;i++)
			{
				scanf("%d",&n[i]);
			}
			small=n[0];
			for(i=1;i<range;i++)
			{
				if(small>n[i])
				{
					small=n[i];
				}
			}
			printf("The smallest value is %d",small);
			break;
		}
		printf("\n\nWant to continue?(Y/N) ");
		ans=getch();
	}
	getch();
}



