/* Program to convert string from lower case to upper case */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	char name[10];
	int i=0;
	printf("Enter string in lower case:");
	scanf("%s",name);
	for(i=0;i<10;i++)
	{
		name[i]=name[i]-32;
		printf("%c",name[i]);
	}
	getch();
}