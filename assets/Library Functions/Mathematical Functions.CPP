/* Program to perform all the mathematical functions */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	clrscr();
	int op,num,num1,num2,a;
	float z,b;
	char ans='y';
	while(ans=='y')
	{
		printf("Select option:");
		printf("\n1:Absolute value");
		printf("\n2:Square");
		printf("\n3:Float absolute value");
		printf("\n4:Powr");
		printf("\n5:Logarithm");
		printf("\n6:Logarithm10");
		printf("\n7:e power x");
		printf("\n8:Mode");
		printf("\n9:Exit\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("Enter the value=");
			scanf("%d",&num);
			a=abs(num);
			printf("%d",a);
			break;
			case 2:
			printf("Enter the value=");
			scanf("%d",&num);
			a=sqrt(num);
			printf("%d",a);
			break;
			case 3:
			printf("Enter the value=");
			scanf("%f",&z);
			b=fabs(z);
			printf("%f",b);
			break;
			case 4:
			printf("Enter the value=");
			scanf("%d",&num1);
			printf("Enter the power=");
			scanf("%d",&num2);
			a=pow(num1,num2);
			printf("%d",a);
			break;
			case 5:
			printf("Enter the value=");
			scanf("%d",&num);
			a=log(num);
			printf("%d",a);
			break;
			case 6:
			printf("Enter the value=");
			scanf("%d",&num);
			a=log10(num);
			printf("%d",a);
			break;
			case 7:
			printf("Enter the value=");
			scanf("%f",&z);
			b=exp(z);
			printf("%f",b);
			break;
			case 8:
			printf("Enter the first value=");
			scanf("%d",&num1);
			printf("Enter the second value=");
			scanf("%d",&num2);
			a=fmod(num1,num2);
			printf("%d",a);
			break;
			case 9:exit(0);
			default:
			printf("Enter valid value(1_10)");
		}
		printf("\nWant to continue?(Y/N)");
		ans=getch();
	}
	getch();
}





