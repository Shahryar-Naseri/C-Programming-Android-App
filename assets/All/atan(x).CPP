/*building trigonometric function atan(x)*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num,b;
	printf("Enter number");
	scanf("%f",&num);
	b=atan(num);
	printf("%f",b);
	getch();
}