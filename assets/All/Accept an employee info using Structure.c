/* Program to accept an employee info using Structure*/
#include<stdio.h>
#include<conio.h>
main()
{
	struct employee
	{
		char name[10];
		int age;
		float salary;
	};
	struct employee b;
   printf("Enter the employee Name, Age, and Salary:\n\n");
	scanf("%s%d%f",&b.name,&b.age,&b.salary);
	printf("%s\t%d\t%f",b.name,b.age,b.salary);
	getch();
}
