/* Program to check a number is Prime or not */
#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,f=0;
	printf("Enter number: ");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		f=1;
	}
	if(f==1)
	printf("\nThe number is Not Prime");
	else
	printf("\nThe number is Prime");
	getch();
}
