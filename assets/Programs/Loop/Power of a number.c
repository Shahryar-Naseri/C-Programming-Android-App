/* Program to print Power of a number */
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,i,p=1;
	printf("Enter number: ");
	scanf("%d",&a);
	printf("Enter power: ");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		p=p*a;
	}
	printf("\n%d raised to power %d is %d",a,b,p);
	getch();
}
