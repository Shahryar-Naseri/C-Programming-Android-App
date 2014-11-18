/* Program to Reverse five digits number */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,a1,a2,a3,a4,a5;
	printf("Enter a 5 digits number: ");
	scanf("%d",&num);
	a1=num%10;
	printf("%d",a1);
	num=num/10;
	a2=num%10;
	printf("%d",a2);
	num=num/10;
	a3=num%10;
	printf("%d",a3);
	num=num/10;
	a4=num%10;
	printf("%d",a4);
	num=num/10;
	a5=num%10;
	printf("%d",a5);
	getch();
}
