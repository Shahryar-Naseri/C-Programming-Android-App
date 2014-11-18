/* Program to calculate Sum of two numbers using Function with return value 
and no argument */
#include<stdio.h>
#include<conio.h>
main()
{
	int sum(),x,y;
	x=sum();
	printf("Sum = %d\n",x);
	y=sum();
	printf("Sum = %d",y);
	getch();
}
int sum()
{
	int a,b,c;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter B = ");
	scanf("%d",&b);
	c=a+b;
	return(c);
}
