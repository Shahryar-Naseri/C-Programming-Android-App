/* Program to show Greater of three numbers using Conditional operators */
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	(a>b?(a>c?printf("\nThe Greater number is %d",a):printf("\nThe Greater number is %d",c)):(b>c?printf("\nThe Greater number is %d",b):printf("\nThe Greater number is %d",c)));
	getch();
}
