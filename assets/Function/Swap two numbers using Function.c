/* Program to Swap two numbers using Function */
#include<stdio.h>
#include<conio.h>
main()
{
	void swap();
	swap();
	getch();
}
void swap()
{
	int a,b;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nA = %d\nB = %d",a,b);
}
