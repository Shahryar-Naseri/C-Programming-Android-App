/* Program to show Vowels in a String */
#include<stdio.h>
#include<conio.h>
main()
{
	char str[20];
	int j,count=0;
	printf("Enter string: ");
	scanf("%s",str);
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
		{
			printf("%c",str[j]);
			count++;
		}
	}
	printf("\nThe number of Vowels is = %d",count);
	getch();
}
