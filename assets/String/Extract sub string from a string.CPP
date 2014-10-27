/* Program to extract sub string from string */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	char name[20];
	int i;
	printf("Enter name:");
	scanf("%s",name);
	for(i=5;i<11;i++)
	printf("%c",name[i]);
	getch();
}