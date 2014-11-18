/* Program to Determine character is Capital, Small case, or Special
symbol */
#include<stdio.h>
#include<conio.h>
main()
{
	signed char ch;
	printf("Enter character: ");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		printf("\nCapital letter: ");
		printf("%c",ch);
	}
	if(ch>=97&&ch<=122)
	{
		printf("\nSmall case: ");
		printf("%c",ch);
	}
	if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=126))
	{
		printf("\nSpecial symbol: ");
		printf("%c",ch);
	}
	getch();
}
