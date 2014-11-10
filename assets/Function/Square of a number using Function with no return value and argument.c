/* Program to find Square of a number using Function with no return value 
and argument */
#include<stdio.h>
#include<conio.h>
main()
{
	void squar();
	squar();
	getch();
}
void squar()
{
	int a,b;
	printf("Enter number: ");
	scanf("%d",&a);
	b=a*a;
	printf("Square of %d = %d",a,b);
}
