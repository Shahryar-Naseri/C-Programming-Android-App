/* Program to print String in Sorted order */
#include<stdio.h>
#include<conio.h>
main()
{
	char str[20];
	int i,j,temp;
	printf("Enter string: ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("Sorted values: ");
	for(i=0;str[i]!='\0';i++)
	printf("%c",str[i]);
	getch();
}
