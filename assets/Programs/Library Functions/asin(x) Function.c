/* Building Trigonometric Function asin(x) */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num,b;
	printf("Enter value: ");
	scanf("%f",&num);
	b=asin(num);
	printf("asin %f = %f",num,b);
	getch();
}
