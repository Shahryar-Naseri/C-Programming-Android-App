/* Program to calculate Area of Circle usings Preprocessor Directives */
#include<stdio.h>
#include<conio.h>
#define area(x)(3.14*x*x)
main()
{
	int r;
	float a;
	printf("Enter radius: ");
	scanf("%d",&r);
	a=area(r);
	printf("\nArea is %f",a);
	getch();
}
