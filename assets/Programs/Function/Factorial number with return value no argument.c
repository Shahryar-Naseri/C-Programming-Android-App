/* Program to print Factorial number using Function return value no argument */
#include<stdio.h>
#include<conio.h>
main()
{
	int factorial(),x;
	x=factorial();
	printf("\nFactorial = %d",x);
	getch();
}
int factorial()
{
	int num,fac=1;
	printf("Enter number: ");
	scanf("%d",&num);
	while(num>0)
	{
		fac*=num;
		num-=1;
	}
	return(fac);
}
