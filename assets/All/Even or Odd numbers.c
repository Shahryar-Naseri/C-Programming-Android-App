/* Program to show number is Even or Odd */
#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\nEven: ");
		printf("%d",n);
	}
	else
	{
		printf("\nOdd: ");
		printf("%d",n);
	}
	getch();
}
