/* Program to extract Sub String from String */
#include<stdio.h>
#include<conio.h>
main()
{
	char name[20];
	int i;
	printf("Enter name: ");
	scanf("%s",name);
	for(i=5;i<11;i++)
	printf("%c",name[i]);
	getch();
}
