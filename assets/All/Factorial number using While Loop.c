/* Program to calculate the Factorial of a number using While Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,fact=1;
	printf("Enter number: ");
	scanf("%d",&num);
	while(num>0)
	{
		fact=fact*num;
		num=num-1;
	}
	printf("\nFactorial = %d",fact);
	getch();
}
