/* Program to Print Pyramid of '*' using Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,n;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<=n;i++)
	{
		for(k=n;k>i;k--)
		printf(" ");
		for(j=0;j<=i;j++)
		printf("*");
		for(j=0;j<i;j++)
		printf("*");
		printf("\n");
	}
	getch();
}
