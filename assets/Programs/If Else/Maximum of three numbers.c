/* Program to find Maximum of three numbers */
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("\nEnter value of B = ");
	scanf("%d",&b);
	printf("\nEnter value of C = ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n\nThe Maximum of three numbers is = ");
			printf("%d",a);
		}
		else
		{
			printf("\n\nThe Maximum of three numbers is = ");
			printf("%d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n\nThe Maximum of three numbers is = ");
			printf("%d",b);
		}
		else
		{
			printf("\n\nThe Maximum of three numbers is = ");
			printf("%d",c);
		}
	}
	getch();
}
