/* Program to perform all arithmetic operation using switch statement */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	clrscr();
	char ans='y';
	int a,b,c,op;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	while(ans=='y')
	{
		printf("\nSelect operation");
		printf("\n1:Add\n2:Subtract\n3:Multiply\n4:Exit\n\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:c=a+b;
			printf("Addition of the two numbers = %d",c);
			break;
			case 2:c=a-b;
			printf("Subtraction of the two numbers = %d",c);
			break;
			case 3:c=a*b;
			printf("Multiplication of the two numbers = %d",c);
			break;
			case 4:exit(0);
			default :printf("Please enter valid value(1-4)");
		}
		printf("\n\nWant to continue(Y/N)?");
		ans=getch();
	}
	getch();
}