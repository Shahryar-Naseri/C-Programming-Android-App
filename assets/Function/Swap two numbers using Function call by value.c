/* Program to Swap two numbers using Functions and call by value */
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	void swap(int,int);
	swap(a,b);
	printf("\nA = %d B = %d",a,b);
	getch();
}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("\nA = %d B = %d",a,b);
}
