/* Program to find Maximum of two numbers */
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("\nEnter value of B = ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\nThe Maximum of two number is = ");
		printf("%d",a);
	}
	else
	{
		printf("\nThe Maximun of two number is = ");
		printf("%d",b);
	}
	getch();
}
