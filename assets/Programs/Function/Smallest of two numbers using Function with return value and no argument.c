/* Program to find Smallest of two numbers using Function with return value 
and no argument */
#include<stdio.h>
#include<conio.h>
main()
{
	int smallest(),x;
	x=smallest();
	getch();
}
int smallest()
{
	int a,b,c;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter B = ");
	scanf("%d",&b);
	if(a<b)
	{
		printf("The Smallest of two numbers is = ");
		printf("%d",a);
		c=a;
	}
	else
	{
		printf("The Smallest of two numbers is = ");
		printf("%d",b);
		c=b;
	}
	return(c);
}
