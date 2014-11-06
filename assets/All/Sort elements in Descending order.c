/* Program to Sort list in Descending order */
#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],i,j,temp,n;
	printf("Enter range between (0_19): ");
	scanf("%d",&n);
	if(n<20)
	{
		printf("Enter numbers:\n\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("\nSorted list:\n\n");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	}
	getch();
}
