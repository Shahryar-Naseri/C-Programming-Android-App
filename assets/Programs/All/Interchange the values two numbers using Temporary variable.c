/* Program to Interchange the values two numbers using Temporary variable */
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	printf("\n\nA = %d\tB = %d",a,b);
	getch();
}
