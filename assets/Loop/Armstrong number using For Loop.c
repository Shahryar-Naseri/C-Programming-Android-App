/* Program to find Armstrong numbers using For Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,a,b,sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	for(a=num;a>0;)
	{
		b=a%10;
		sum=sum+(b*b*b);
		a=a/10;
	}
	if(sum==num)
	printf("\nArmstrong number");
	else
	printf("\nNOT Armstrong");
	getch();
}
