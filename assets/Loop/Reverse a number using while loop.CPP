/* Program to print the reverse of a number using while loop */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int num,a;
	printf("Enter number=");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		printf("%d",a);
		num=num/10;
	}
	getch();
}