/* Program to find numbers of Positive, Negative, Even and Odd numbers in an Array */
#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],even=0,odd=0,pos=0,neg=0,i,n;
	printf("Enter range between (0_19): ");
	scanf("%d",&n);
	if(n<20)
	printf("Enter value:\n\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	a[i]%2==0?even++:odd++;
	for(i=0;i<n;i++)
	a[i]>0?pos++:neg++;
	printf("\n\nNumber of Positives = %d\nNumber of Negatives = %d\nNumber of Evens = %d\nNumber of Odds = %d",pos,neg,even,odd);
	getch();
}
