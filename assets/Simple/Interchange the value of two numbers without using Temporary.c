/* Program to Interchange the values of two numbers without using Temporary 
variable */
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\nA = %d\tB = %d",a,b);
	getch();
}
