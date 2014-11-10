/* Program to show Greater of two numbers */
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	(a>b)?printf("The Greater number is %d",a):printf("The Greater number is %d",b);
	getch();
}
