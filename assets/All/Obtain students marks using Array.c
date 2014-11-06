/* Program to calculate 10 marks obtained by a student using Array */
#include<stdio.h>
#include<conio.h>
main()
{
	int m[10],total,i;
	total=0;
	float per;
	printf("Enter Marks:\n\n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&m[i]);
		total=total+m[i];
	}
	per=total/10;
	printf("\nTotal = %d\tPercentage = %f",total,per);
	getch();
}
