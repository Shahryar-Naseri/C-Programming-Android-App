/*building trigonometric function cos(x)*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num,b;
	printf("Enter number");
	scanf("%f",&num);
	b=cos(num);
	printf("%f",b);
	getch();
}