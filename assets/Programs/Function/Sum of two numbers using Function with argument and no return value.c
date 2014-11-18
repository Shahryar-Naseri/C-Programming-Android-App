/* Program to calculate Sum of two numbers using Function with argument and 
no return value */
#include<stdio.h>
#include<conio.h>
main()
{
	void sum(int,int);
	int a,b;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter A = ");
	scanf("%d",&b);
	sum(a,b);
	getch();
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("Sum = %d",z);
}
