/* Program to find a number is Even or Odd using Function with 
return value and argument */
#include<stdio.h>
#include<conio.h>
main()
{
	int even(int);
	int a,b;
	printf("Enter number: ");
	scanf("%d",&a);
	b=even(a);
	getch();
}
int even(int a)
{
	int x;
	x=a;
	if(x%2==0)
	{
		printf("\n%d is an Even number",x);
	}
	else
	{
		printf("\n%d is an Odd number",x);
	}
	return(x);
}
