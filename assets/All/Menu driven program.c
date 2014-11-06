/* Design Menu driven program with 4 option */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int num,fact=1,op,a,b;
	char ans='y';
	while(ans=='y')
	{
		printf("\nSelect operation");
		printf("\n\n1:Factorial\n2:Maximum\n3:Odd or Even\n4:Exit\n\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("Enter number: ");
			scanf("%d",&num);
			while(num>0)
			{
				fact=fact*num;
				num=num-1;
			}
			printf("%d",fact);
			break;
			case 2:
			printf("Enter value for a = ");
			scanf("%d",&a);
			printf("\nEnter value for b = ");
			scanf("%d",&b);
			if(a>b)
			{
				printf("\nThe maximum of two numbers is = ");
				printf("%d",a);
			}
			else
			{
				printf("\nThe maximum of two numbers is = ");
				printf("%d",b);
			}
			break;
			case 3:
			printf("Enter number:");
			scanf("%d",&num);
			if(num%2==0)
			{
				printf("\nEven");
				printf("\t%d",num);
			}
			else
			{
				printf("\nOdd");
				printf("\t%d",num);
			}
			break;
			case 4:exit(0);
			default:
			printf("Enter valid value(1-4)");
		}
		printf("\n\nWant to continue(Y/N)?");
		ans=getch();
	}
	getch();
}
