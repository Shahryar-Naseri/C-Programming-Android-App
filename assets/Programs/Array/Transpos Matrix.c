/* Program to Transpose a Matrix */
#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],i,j;
	printf("Enter elements of A:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[j][i]);
		}
	}
	getch();
}
