/* Program to find sum of n elements in an array and display the element
number,their value and the address */
#include<stdio.h>
#include<conio.h>
main()
{
	int a[50],n,i,sum=0;
	printf("How many elements do you want to enter?\n\n");
	scanf("%d",&n);
	printf("\n\nEnter different elements:\n\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEelemenst\tValue\tAddress");
	for(i=1;i<=n;i++)
	{
		printf("\n%d\t\t%d\t%u",i,a[i],&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	printf("\n\nSum = %d",sum);
	printf("\nAddress of Sum %u",&sum);
	getch();
}
