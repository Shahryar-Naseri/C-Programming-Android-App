/* Program to calculate the Division obtained by student */
#include<stdio.h>
#include<conio.h>
main()
{
	int m1,m2,m3,m4,m5,total;
	float p;
	printf("Enter m1, m2, m3, m4, m5:\n\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	p=total/5;
	if(p>=60)
	printf("\nFirst Division");
	if(p>=50&&p<=59)
	printf("\nSecond Division");
	if(p>=40&&p<=49)
	printf("\nThird Division");
	if(p<40)
	printf("\nFail");
	getch();
}
