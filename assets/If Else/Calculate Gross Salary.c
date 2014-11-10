/* Program to calculate Gross Salary
If basic salary is less than 1500,then HRA=10% 
of basic salary and DA=90% of basic. If salary is either
equal to or above 1500,then HRA=500 and DA=98% of
basic salary */
#include<stdio.h>
#include<conio.h>
main()
{
	float bs,gs,hra,da;
	printf("Enter basic salary = ");
	scanf("%f",&bs);
	if(bs<1500)	
	{
		hra=(bs*10)/100;
		da=(bs*90)/100;
	}
	 else
	{
		hra=500;
		da=(bs*98)/100;
	}
	gs=hra+da+bs;
	printf("Gross salary = %f",gs);
	getch();
}
