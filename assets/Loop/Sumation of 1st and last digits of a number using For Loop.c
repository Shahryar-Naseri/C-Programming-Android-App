/* Program to print Sum of 1st and last digits of a number using 
For Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,j,k;
	printf("Enter number: ");
	scanf("%d",&num);
	i=num%10;
	for(;num>=1;)
	{
		j=num%10;
		num=num/10;
	}
	k=i+j;
	printf("\nSum = %d",k);
	getch();
}
