/* Program to perform all the Mathematical Functions */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int op,num,num1,num2,a;
	float z,b;
	char ans='y';
	while(ans=='y')
	{
		printf("Select option:");
		printf("\n\n1:Absolute value");
		printf("\n2:Square");
		printf("\n3:Float absolute value");
		printf("\n4:Power");
		printf("\n5:Logarithm");
		printf("\n6:Logarithm10");
		printf("\n7:e power x");
		printf("\n8:Mode");
		printf("\n9:Exit\n\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("\nEnter value: ");
			scanf("%d",&num);
			a=abs(num);
			printf("\n%d",a);
			break;
			case 2:
			printf("\nEnter value: ");
			scanf("%d",&num);
			a=sqrt(num);
			printf("\n%d",a);
			break;
			case 3:
			printf("\nEnter value: ");
			scanf("%f",&z);
			b=fabs(z);
			printf("\n%f",b);
			break;
			case 4:
			printf("\nEnter value: ");
			scanf("%d",&num1);
			printf("\nEnter power: ");
			scanf("%d",&num2);
			a=pow(num1,num2);
			printf("\n%d",a);
			break;
			case 5:
			printf("\nEnter value: ");
			scanf("%d",&num);
			a=log(num);
			printf("\n%d",a);
			break;
			case 6:
			printf("\nEnter value: ");
			scanf("%d",&num);
			a=log10(num);
			printf("\n%d",a);
			break;
			case 7:
			printf("\nEnter value: ");
			scanf("%f",&z);
			b=exp(z);
			printf("\n%f",b);
			break;
			case 8:
			printf("\nEnter first value: ");
			scanf("%d",&num1);
			printf("\nEnter second value: ");
			scanf("%d",&num2);
			a=fmod(num1,num2);
			printf("\n%d",a);
			break;
			case 9:exit(0);
			default:
			printf("\nEnter valid value(1_10)");
		}
		printf("\n\nWant to continue?(Y/N)");
		ans=getch();
	}
	getch();
}





