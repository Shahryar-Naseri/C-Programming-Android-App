/*building trigonometric function atan2(x,y)*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num1,num2,b;
	printf("Enter first value:");
	scanf("%f",&num1);
	printf("\nEnter second value:");
	scanf("%f",&num2);
	b=atan2(num1,num2);
	printf("%f",b);
	getch();
}