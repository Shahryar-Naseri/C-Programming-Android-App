/* Program to print power of number */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int a,b,i,p=1;
	printf("Enter the number:");
	scanf("%d",&a);
	printf("Enter the power:");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		p=p*a;
	}
	printf("%d raised to power %d is %d",a,b,p);
	getch();
}