/* Building Trigonometric Function cos(x) */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num,b;
	printf("Enter value: ");
	scanf("%f",&num);
	b=cos(num);
	printf("cos %f = %f",num,b);
	getch();
}
