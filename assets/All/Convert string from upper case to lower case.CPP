/* Program to change string from upper case to lower case */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	char str[10];
	int i;
	printf("Enter string in upper case:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		str[i]=str[i]+32;
	}
	for(i=0;str[i]!='\0';i++)
	printf("%c",str[i]);
	getch();
}