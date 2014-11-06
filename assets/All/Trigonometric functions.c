/* Program to perform all the Trigonometric functions */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
main()
{
	int op;
	float num,num1,num2,b;
	char ans='y';
	while(ans=='y')
	{
		printf("Select option:");
		printf("\n\n1:cos-1(X)");
		printf("\n2:sin-1(X)");
		printf("\n3:tan-1(X)");
		printf("\n4:tan-1(X/Y)");
		printf("\n5:cos(X)");
		printf("\n6:sin(X)");
		printf("\n7:tna(X)");
		printf("\n8:Exit\n\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("Enter the value = ");
			scanf("%f",&num);
			b=acos(num);
			printf("%f",b);
			break;
			case 2:
			printf("Enter the value = ");
			scanf("%f",&num);
			b=asin(num);
			printf("%f",b);
			break;
			case 3:
			printf("Enter the value = ");
			scanf("%f",&num);
			b=atan(num);
			printf("%f",b);
			break;
			case 4:
			printf("Enter the value of X = ");
			scanf("%f",&num1);
			printf("Enter the value of Y = ");
			scanf("%f",&num2);
			b=atan2(num1,num2);
			printf("%f",b);
			break;
			case 5:
			printf("Enter the value = ");
			scanf("%f",&num);
			b=cos(num);
			printf("%f",b);
			break;
			case 6:
			printf("Enter the value = ");
			scanf("%f",&num);
			b=sin(num);
			printf("%f",b);
			break;
			case 7:
			printf("Enter the value = ");
			scanf("%f",&num);
			b=tan(num);
			printf("%f",b);
			break;
			case 8:exit(0);
			default:
			printf("Enter valid value(1_8)");
		}
		printf("\n\nWant to continue(Y/N)?");
		ans=getch();
	}
	getch();
}



