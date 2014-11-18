/* Program to find Largest and Smallest value of an Arrays */
#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],i,n,large,small;
	printf("Enter the range between(0_19): ");
	scanf("%d",&n);
	if(n<20)
	{
		printf("Enter the numbers:\n\n");
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
		printf("\n\nLargest = %d\nSmallest = %d",large,small);
	}
	getch();
}
