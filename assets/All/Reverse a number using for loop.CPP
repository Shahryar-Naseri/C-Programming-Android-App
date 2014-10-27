/* Program to print the reverse of a number using for loop */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int num,a;
	printf("Enter number=");
	scanf("%d",&num);
	for(a=0;num>0;)
	{
		a=num%10;
		printf("%d",a);
		num=num/10;
	}
	getch();
}