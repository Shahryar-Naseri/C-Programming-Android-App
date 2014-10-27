/* Program to calculate the Factorial of a number using do while loop*/
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int num,fact=1;
	printf("Enter number=");
	scanf("%d",&num);
	do
	{
		fact=fact*num;
		num=num-1;
	}while(num>0);
	printf("%d",fact);
	getch();
}