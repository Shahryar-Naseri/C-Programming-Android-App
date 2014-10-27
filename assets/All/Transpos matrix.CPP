/* Program to transpose a matrix */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int a[3][3],i,j;
	printf("Enter elements of A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[j][i]);
		}
	}
	getch();
}