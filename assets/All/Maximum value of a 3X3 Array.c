/* Program to find the Largest number from any 3 row by 3 column Matrix */
#include<stdio.h>
#include<conio.h>
main()
{
	int a[3][3],i,j,largest;
	printf("Enter the elements of A:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	largest=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(largest<a[i][j])
			largest=a[i][j];
		}
	}
	printf("\nThe Largest number = %d",largest);
	getch();
}
