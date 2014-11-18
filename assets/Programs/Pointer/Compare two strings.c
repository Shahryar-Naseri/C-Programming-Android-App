/* Program to compare two strings unsing Pointer */
#include<stdio.h>
#include<conio.h>
main()
{
	char str1[]="abc";
	char str2[]="abc";
	int comp(char *,char *),x;
	x=comp(str1,str2);
	printf("%d",x);
	getch();
}
int comp(char *s,char *t)
{
	while(*s==*t)
	{
		if(*s=='\0')
		{
			return(0);
			break;
		}
		s++;
		t++;
	}
	return(*s-*t);
}
