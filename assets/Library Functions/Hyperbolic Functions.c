/* Program to perform all the Hyperbolic Functions */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
main()
{
	int op;
	float num,a;
	char ans='y';
	while(ans=='y')
	{
		printf("Select option:");
		printf("\n\n1:cosh");
		printf("\n2:sinh");
		printf("\n3:tanh");
		printf("\n4:Exit\n\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("\nEnter value: ");
			scanf("%f",&num);
			a=cosh(num);
			printf("\n%f",a);
			break;
			case 2:
			printf("\nEnter value: ");
			scanf("%f",&num);
			a=sinh(num);
			printf("\n%f",a);
			break;
			case 3:
			printf("\nEnter value: ");
			scanf("%f",&num);
			a=tanh(num);
			printf("\n%f",a);
			break;
			case 4:exit(0);
			default:
			printf("\nEnter valid value(1_4)");
		}
		printf("\n\nWant to continue?(Y/N)");
		ans=getch();
	}
	getch();
}
