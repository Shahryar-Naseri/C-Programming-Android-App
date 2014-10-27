/* Program to print the reverse of a number using do_while loop */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int num,a;
	printf("Enter number=");
	scanf("%d",&num);
	do
	{
		a=num%10;
		printf("%d",a);
		num=num/10;
	}while(num>0);
	getch();
}