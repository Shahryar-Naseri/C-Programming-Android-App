/* Program to print whether a number is Prime or not using Function with 
argument and no return value */
#include<stdio.h>
#include<conio.h>
main()
{
	void prime(int);
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	prime(num);
	getch();
}
void prime(int x)
{
	int i,f=0,y=x;
	for(i=2;i<y;i++)
	{
		if(y%i==0)
		f=1;
	}
	if(f==1)
	printf("\n%d is not a Prime number",x);
	else
	printf("\n%d is a Prime number",x);
}
