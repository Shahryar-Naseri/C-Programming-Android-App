/* Program to show Miscellaneous Function */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
main()
{
	int a,op;
	float b;
	char c,d,ans='y';
	while(ans=='y')
	{
		printf("Miscellaneous function\n\n");
		printf("Menu:\n");
		printf("1:ceil\n");
		printf("2:floor\n");
		printf("3:to ascii\n");
		printf("4:to lower\n");
		printf("5:to upper\n");
		printf("6:Exit\n\n");
		printf("Select the option (1_6): ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
			printf("Enter the value = ");
			scanf("%f",&b);
			a=ceil(b);
			printf("%d",a);
			break;
			case 2:
			printf("Enter the value = ");
			scanf("%f",&b);
			a=floor(b);
			printf("%d",a);
			break;
			case 3:
			fflush(stdin);
			printf("Enter the value = ");
			scanf("%c",&c);
			a=toascii(c);
			printf("%d",a);
			break;
			case 4:
			fflush(stdin);
			printf("Enter the value = ");
			scanf("%c",&c);
			d=tolower(c);
			printf("%c",d);
			break;
			case 5:
			fflush(stdin);
			printf("Enter the value = ");
			scanf("%c",&c);
			d=toupper(c);
			printf("%c",d);
			break;
			case 6:exit(0);
			default:
			printf("Please enter valid value(1_5)");
		}
		printf("\n\nWant to continue(Y/N)?\n");
		ans=getch();
	}
}

