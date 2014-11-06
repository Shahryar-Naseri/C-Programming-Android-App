/* Program to reverse an Array using Pointer */
#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],*i,*j,n,k;
	printf("Enter elements:\n");
	for(n=0;n<5;n++)
	scanf("%d",&a[n]);
	i=&a[4];
	k=4;
	while(k>=0)
	{
		printf("\n%d",*i);
		i--;
		k--;
	}
	getch();
}
