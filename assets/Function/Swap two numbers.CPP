/* Program to swap two numbers using functions */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	void swap();
	swap();
	getch();
}
void swap()
{
	int a,b;
	printf("Enter a=");
	scanf("%d",&a);
	printf("Enter b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d%d",a,b);
}