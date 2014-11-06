/* Program to print the Reverse of a number using For Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,a;
	printf("Enter number: ");
	scanf("%d",&num);
	for(a=0;num>0;)
	{
		a=num%10;
		printf("%d",a);
		num=num/10;
	}
	getch();
}
