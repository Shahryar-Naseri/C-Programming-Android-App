/* Building Trigonometric Function sin(x) */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num,b;
	printf("Enter value: ");
	scanf("%f",&num);
	b=sin(num);
	printf("sin %f = %f",num,b);
	getch();
}
