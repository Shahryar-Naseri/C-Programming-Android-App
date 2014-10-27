/* Program to create structure of an employee */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	struct employee
	{
		char name[10];
		int age;
		float salary;
	};
	struct employee b;
	scanf("%s%d%f",&b.name,&b.age,&b.salary);
	printf("%s\t%d\t%f",b.name,b.age,b.salary);
	getch();
}