/* Program to show vowels in a string */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	char str[20];
	int j,count=0;
	printf("Enter string:");
	scanf("%s",str);
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
		{
			printf("%c",str[j]);
			count++;
		}
	}
	printf("\nThe number of vowels is=%d",count);
	getch();
}