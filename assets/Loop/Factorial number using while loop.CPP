/* Program to calculate the Factorial of a number_while loop */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int num,fact=1;
	printf("Enter number=");
	scanf("%d",&num);
	while(num>0)
	{
		fact=fact*num;
		num=num-1;
	}
	printf("%d",fact);
	getch();
}