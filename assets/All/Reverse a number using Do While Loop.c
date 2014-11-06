/* Program to print the Reverse of a number using Do While Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,a;
	printf("Enter number: ");
	scanf("%d",&num);
	do
	{
		a=num%10;
		printf("%d",a);
		num=num/10;
	}while(num>0);
	getch();
}
