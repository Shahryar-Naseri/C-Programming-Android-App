/* Program to convert String from Lower case to Upper case */
#include<stdio.h>
#include<conio.h>
main()
{
	char str[10];
	int i;
	printf("Enter string in lower case: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		str[i]=str[i]-32;
		printf("%c",str[i]);
	}
	getch();
}
