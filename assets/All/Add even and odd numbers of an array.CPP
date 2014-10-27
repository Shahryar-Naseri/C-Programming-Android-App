/* Program to add even and odd numbers of an array */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int a[10],i,sum=0,mul=1;
	printf("Enter elements:\n");
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
	printf("Sum=%d\n",sum);
	printf("Mul=%d",mul);
	getch();
}