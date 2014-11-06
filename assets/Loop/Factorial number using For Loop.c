/* Program to calculate the Factorial of a number using For Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,fact=1;
	printf("Enter number: ");
	scanf("%d",&num);
	for(fact=1;num>0;)
	{
		fact=fact*num;
		num=num-1;
	}
	printf("\nFactorial = %d",fact);
	getch();
}
