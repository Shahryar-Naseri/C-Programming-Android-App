/* Program to reverse a String using Pointer */
#include<stdio.h>
#include<conio.h>
main()
{
	char str[20];
	char *p,*d,n;
	int l=0,i=0;
	printf("Enter string: ");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		l++;
		i++;
	}
	printf("\nNumber of characters = %d\n",l);
	for(i=l-1;i>=0;i--)
	printf("%c",*(str+i));
	getch();
}
