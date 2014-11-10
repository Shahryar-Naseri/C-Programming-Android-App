/* Program to print Multiplication Table using For Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,a,product;
	printf("Enter number: ");
	scanf("%d",&num);
	for(a=1;a<=10;a++)
	{
		product=num*a;
		printf("\n%d * %d = %d\n",num,a,product);
	}
	getch();
}
