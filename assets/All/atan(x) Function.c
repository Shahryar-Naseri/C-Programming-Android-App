/* Building Trigonometric Function atan(x) */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num,b;
	printf("Enter value: ");
	scanf("%f",&num);
	b=atan(num);
	printf("atan %f = %f",num,b);
	getch();
}
