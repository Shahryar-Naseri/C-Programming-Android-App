/* Program to perform Arithmetic operations on two 2-D Arrays */
#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3],i,j;
	printf("Enter elements of A:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter elements of B:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nAddition of two Arrays:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("\t%d",c[i][j]);
		}
	}
	printf("\nSubtraction of two Arrays:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
			printf("\t%d",d[i][j]);
		}
	}
	printf("\nMultiplication of two Arrays:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			e[i][j]=a[i][j]*b[i][j];
			printf("\t%d",e[i][j]);
		}
	}
	getch();
}
