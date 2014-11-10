/* Program to print Multiplication Table using While Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,a,product;
	printf("Enter number: ");
	scanf("%d",&num);
	a=1;
	while(a<=10)
	{
		product=num*a;
		printf("\n %d * %d = %d\n",num,a,product);
		a=a+1;
	}
	getch();
}
