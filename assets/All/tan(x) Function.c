/* Building Trigonometric Function tan(x) */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num,b;
	printf("Enter value: ");
	scanf("%f",&num);
	b=tan(num);
	printf("tan %f = %f",num,b);
	getch();
}
