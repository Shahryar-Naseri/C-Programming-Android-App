/* Program to calculate Sum of two numbers using Function with no return value 
and argument */
#include<stdio.h>
#include<conio.h>
main()
{
	void sum();
	sum();
	printf("\n");
	sum();
	getch();
}
void sum()
{
	int a,b,c;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter B = ");
	scanf("%d",&b);
	c=a+b;
	printf("Sum = %d",c);
}
