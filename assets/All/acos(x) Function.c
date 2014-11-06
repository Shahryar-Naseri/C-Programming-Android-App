/* Building Trigonometric Function acos(x) */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float num,b;
	printf("Enter value: ");
	scanf("%f",&num);
	b=acos(num);
	printf("acos %f = %f",num,b);
	getch();
}
