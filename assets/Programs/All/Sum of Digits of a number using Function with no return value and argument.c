/* Program to print Sum of Digits of a number using Function with 
no return value and argument */
#include<stdio.h>
#include<conio.h>
main()
{
	void sum();
	sum();
	getch();
}
void sum()
{
	int num,a=0,b;
	printf("Enter number: ");
	scanf("%d",&num);
	while(num>0)
	{
		b=num%10;
		a=a+b;
		num=num/10;
	}
	printf("\nSum = %d",a);
}
