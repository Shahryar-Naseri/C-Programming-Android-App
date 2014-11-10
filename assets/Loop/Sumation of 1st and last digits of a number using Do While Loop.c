/* Program to print Sum of 1st and last digits of a number using 
Do While Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,j,k;
	printf("Enter number: ");
	scanf("%d",&num);
	i=num%10;
	do
	{
		j=num%10;
		num=num/10;
	}while(num>=1);
	k=i+j;
	printf("\nSum = %d",k);
	getch();
}
