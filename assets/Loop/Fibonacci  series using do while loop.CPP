/* Program to print Fibonacci series using do while */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int f1=0,f2=1,f=0;
	do
	{
		f=f1+f2;
		f1=f2;
		f2=f;
		printf("%d",f);
	}while(f<13);
	getch();
}