/* Program to reverse an array using pointer */
#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int a[5],*i,*j,n,k;
	printf("Enter elements:\n");
	for(n=0;n<5;n++)
	scanf("%d",&a[n]);
	i=&a[4];
	k=4;
	while(k>=0)
	{
		printf("%d",*i);
		i--;
		k--;
	}
	getch();
}