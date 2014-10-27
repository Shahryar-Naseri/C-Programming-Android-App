/* Program to access elements of a nested structure */
#include<stdio.h>
#include<conio.h>
main()
{
	struct data
	{
		char name;
		int age;
	};
	struct address
	{
		char street;
		char city;
		struct data d;
	};
	struct address a;
	clrscr();
	printf("Enter street,city,name,age:\n");
	scanf("%c%c%c%d",&a.street,&a.city,&a.d.name,&a.d.age);
	printf("%c%c%c%d",a.street,a.city,a.d.name,a.d.age);
	getch();
}

