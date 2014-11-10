/* Program to calculate Sum of two numbers using Functions with return value 
and argument */
#include<stdio.h>
#include<conio.h>
main()
{
	int sum(int,int);
	int a,b,c;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter B = ");
	scanf("%d",&b);
	c=sum(a,b);
	printf("Sum = %d",c);
	getch();
}
int sum(int a,int b)
{
	int z;
	z=a+b;
	return(z);
}
