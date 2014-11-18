/* Program to find Area and Perimeter of a Circle using Pointer */
#include<stdio.h>
#include<conio.h>
main()
{
	void cal(int,float *,float *);
	int r;
	float area,peri;
	printf("Enter radius: ");
	scanf("%d",&r);
	cal(r,&area,&peri);
	printf("\nArea = %f\nPerimeter = %f",area,peri);
	getch();
}
void cal(int r,float *a,float *p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}
