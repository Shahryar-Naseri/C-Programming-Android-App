/* Program to display the Sum of the Highest and Lowest numbers */
#include<stdio.h>
#include<conio.h>
main()
{
	int m[20],large,small,i,range,sum;
	printf("Enter range between (0_19): ");
	scanf("%d",&range);
	if(range>=20)
	{
		printf("Enter range<20\n");
		printf("Enter range: ");
		scanf("%d",&range);
	}
	printf("Enter values:\n\n");
	for(i=0;i<range;i++)
	scanf("%d",&m[i]);
	large=m[0];
	for(i=1;i<range;i++)
	{
		if(large<m[i])
		{
			large=m[i];
		}
	}
	small=m[0];
	for(i=1;i<range;i++)
	{
		if(small>m[i])
		{
			small=m[i];
		}
	}
	sum=small+large;
	printf("\n\nSum = %d",sum);
	getch();
}
