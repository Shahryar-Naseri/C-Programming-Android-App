/* Program to swap two numbers using functions and call by reference */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int a=10,b=20;
	void swap(int*,int*);
	swap(&a,&b);
	printf("%d%d",a,b);
	getch();
}
void swap(int*a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("%d%d",*a,*b);
}