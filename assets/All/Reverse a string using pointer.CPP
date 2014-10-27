/* Program to reverse a string using pointer */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	char str[20];
	char *p,*d,n;
	int l=0,i=0;
	printf("Enter string:");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		l++;
		i++;
	}
	printf("Number of character=%d\n",l);
	for(i=l-1;i>=0;i--)
	printf("%c",*(str+i));
	getch();
}