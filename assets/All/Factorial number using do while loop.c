/* Program to calculate the Factorial of a number using Do While Loop*/
#include<stdio.h>
#include<conio.h>
main()
{
	int num,fact=1;
	printf("Enter numbe: ");
	scanf("%d",&num);
	do
	{
		fact=fact*num;
		num=num-1;
	}while(num>0);
	printf("\nFactorial = %d",fact);
	getch();
}
