/* Program to print the Reverse of a number using While Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,a;
	printf("Enter number: ");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		printf("%d",a);
		num=num/10;
	}
	getch();
}
