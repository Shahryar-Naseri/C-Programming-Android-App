/* Program to calculate Sum of five digits number */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,sum=0,a1,a2,a3,a4,a5;
	printf("Enter a 5 or less digits number: ");
	scanf("%d",&num);
	a1=num%10;
	sum=sum+a1;
	num=num/10;
	a2=num%10;
	sum=sum+a2;
	num=num/10;
	a3=num%10;
	sum=sum+a3;
	num=num/10;
	a4=num%10;
	sum=sum+a4;
	num=num/10;
	a5=num%10;
	sum=sum+a5;
	printf("\nSum = %d",sum);
	getch();
}
