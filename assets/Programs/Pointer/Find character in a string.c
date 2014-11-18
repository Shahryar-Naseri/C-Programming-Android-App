/* Program to find character in a string */
#include<stdio.h>
#include<conio.h>
main()
{
	char str[20];
	char *p,*d,n;
	int k;
	printf("Enter string: ");
	scanf("%s",&str);
	printf("Enter character you want to find: ");
	scanf("%s",&n);
	p=str;
	d=&n;
	while(*p!='\0')
	{
		if(*d==*p)
		k=1;
		p++;
	}
	if(k==1)
	printf("\nCharacter is present");
	else
	printf("\nCharacter is not present");
	getch();
}
