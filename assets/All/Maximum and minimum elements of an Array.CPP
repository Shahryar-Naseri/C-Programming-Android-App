/* Program to find largest and smallest value of n arrays */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int a[20],i,n,large,small;
	printf("Enter the range between(0_19):");
	scanf("%d",&n);
	if(n<20)
	{
		printf("Enter the numbers:\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		large=a[0];
		for(i=0;i<n;i++)
		{
			if(large<a[i])
			large=a[i];
		}
		small=a[0];
		for(i=0;i<n;i++)
		{
			if(small>a[i])
			small=a[i];
		}
		printf("\nLargest=%d\nSmallest=%d",large,small);
	}
	getch();
}