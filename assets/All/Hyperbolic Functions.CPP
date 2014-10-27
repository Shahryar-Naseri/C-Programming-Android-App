/* Program to perform all the hyperbolic functions */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
main()
{
	clrscr();
	int op;
	float num,a;
	char ans='y';
	while(ans=='y')
	{
		printf("Select option:");
		printf("\n1:cosh");
		printf("\n2:sinh");
		printf("\n3:tanh");
		printf("\n4:Exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("Enter the value=");
			scanf("%f",&num);
			a=cosh(num);
			printf("%f",a);
			break;
			case 2:
			printf("Enter the value=");
			scanf("%f",&num);
			a=sinh(num);
			printf("%f",a);
			break;
			case 3:
			printf("Enter the value=");
			scanf("%f",&num);
			a=tanh(num);
			printf("%f",a);
			break;
			case 4:exit(0);
			default:
			printf("Enter valid value(1_4)");
		}
		printf("\nWant to continue?(Y/N)");
		ans=getch();
	}
	getch();
}
