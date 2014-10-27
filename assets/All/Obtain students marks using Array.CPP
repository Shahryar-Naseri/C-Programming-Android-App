/* Program to calculate 10 marks obtained by the student using array */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int m[10],total,i;
	float per;
	printf("Enter marks:\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&m[i]);
		total=total+m[i];
	}
	per=total/10;
	printf("\n%d\t%f",total,per);
	getch();
}