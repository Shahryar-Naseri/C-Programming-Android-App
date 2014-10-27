/*building trigonometric function tan(x)*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num,b;
	printf("Enter number");
	scanf("%f",&num);
	b=tan(num);
	printf("%f",b);
	getch();
}