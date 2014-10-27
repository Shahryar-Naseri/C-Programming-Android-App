/* Program to find area and perimeter of circle using pointer */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	void cal(int,float *,float *);
	int r;
	float area,peri;
	printf("Enter radius:");
	scanf("%d",&r);
	cal(r,&area,&peri);
	printf("Area=%f\nPerimeter=%f",area,peri);
	getch();
}
void cal(int r,float *a,float *p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}