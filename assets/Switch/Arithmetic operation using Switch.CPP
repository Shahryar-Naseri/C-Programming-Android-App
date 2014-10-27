/* Program to perform all arithmetic operation using switch statement */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	clrscr();
	char ans='y';
	int a,b,c,op;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	while(ans=='y')
	{
		printf("\nselect operation");
		printf("\n1:add\n2:sub\n3:mul\n4:exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:c=a+b;
			printf("%d",c);
			break;
			case 2:c=a-b;
			printf("%d",c);
			break;
			case 3:c=a*b;
			printf("%d",c);
			break;
			case 4:exit(0);
			default :printf("Enter valid value(1-4)");
		}
		printf("\nWant to continue(Y/N)?");
		ans=getch();
	}
	getch();
}