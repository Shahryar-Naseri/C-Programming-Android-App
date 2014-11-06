/* Program to Add Even and Multiply Odd numbers of an Array */
#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,sum=0,mul=1;
	printf("Enter elements:\n\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
		else
		{
			mul=mul*a[i];
		}
	}
	printf("\nSummation of Even numbers = %d\n",sum);
	printf("Multiplication of Odd numbers = %d",mul);
	getch();
}
