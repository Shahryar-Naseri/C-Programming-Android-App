/* Nesting of Functions */
#include<stdio.h>
#include<conio.h>
main()
{
	int mul(int,int),a=5,b=2,x;
	x=mul(a,b);
	printf("%d",x);
	getch();
}
int mul(int a,int b)
{
	int c,x=10,y=20,z;
	int sum(int,int);
	c=z*b;
	z=sum(x,y);
	printf("%d\t",z);
	return(c);
}
int sum(int x,int y)
{
	int u;
	u=x+y;
	return(u);
}
