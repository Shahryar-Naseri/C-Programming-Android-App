/* Recursion for Fibonacci series */
#include<stdio.h>
#include<conio.h>
void main()
{
	int fib(int,int,int,int),x,f=0,f1=0,f2=1,n;
	clrscr();
	printf("Enter range:");
	scanf("%d",&n);
	printf("%d\t%d",f1,f2);
	x=fib(f1,f2,f,n);
	getch();
}
int fib(int f1,int f2,int f,int n)
{
	while(f<n)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
		printf("\t%d",f);
		fib(f1,f2,f,n);
		return(f);
	}
}