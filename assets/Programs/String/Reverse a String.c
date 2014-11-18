/* Program to Reverse a String */
#include<stdio.h>
#include<conio.h>
main()
{
	char str[5];
	int i;
	printf("Enter string: ");
	for(i=0;i<5;i++)
	{
		scanf("%c",&str[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	getch();
}
