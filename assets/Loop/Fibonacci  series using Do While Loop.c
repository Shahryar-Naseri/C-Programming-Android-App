/* Program to print Fibonacci series using Do While Loop */
#include<stdio.h>
#include<conio.h>
main()
{
	int f1=0,f2=1,f=0;
	do
	{
		f=f1+f2;
		f1=f2;
		f2=f;
		printf("%d\t",f);
	}while(f<13);
	getch();
}
