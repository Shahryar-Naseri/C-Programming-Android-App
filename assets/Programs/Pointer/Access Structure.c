/* Program to access Structure using Pointer */
#include<stdio.h>
#include<conio.h>
main()
{
	struct student
	{
		char name[20];
		int age;
		float score;
	};
	struct student s1;
	printf("Enter name: ");
	scanf("%s",&s1.name);
	printf("Enter age: ");
	scanf("%d",&s1.age);
	printf("Enter score: ");
	scanf("%f",&s1.score);
	printf("\n%s\t%d\t%f",s1.name,s1.age,s1.score);
	struct student *ptr;
	ptr=&s1;
	printf("\n%s\t%d\t%f",ptr->name,ptr->age,ptr->score);
	getch();
}
