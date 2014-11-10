/* Currency program,that tells you how many number of 100,50,20,10,5,2 
and 1 notes you have. As example if the total is 545 then you own 
five 100 notes,two 20 notes and one 5 note using Switch, Goto, Break */
#include<stdio.h>
#include<conio.h>
main()
{
	int n,c,p,q,r,s,t,u;
	printf("Enter vlue: ");
	scanf("%d",&n);
	printf("\n****Main Menu****\n");
	printf("1:100\n");
	printf("2:50\n");
	printf("3:20\n");
	printf("4:10\n");
	printf("5:5\n");
	printf("6:2\n");
	printf("7:1\n");
	printf("Select the option:\n\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		goto first;
		break;
		case 2:
		goto second;
		break;
		case 3:
		goto third;
		break;
		case 4:
		goto fourth;
		break;
		case 5:
		goto fifth;
		break;
		case 6:
		goto sixth;
		break;
		case 7:
		goto seventh;
	}
	first:
	{
		c=n/100;
		printf("\nNumbers of 100: %d",c);
		n=n%100;
		goto second;
	}
	second:
	{
		p=n/50;
		printf("\nNumbers of 50: %d",p);
		n=n%50;
		goto third;
	}
	third:
	{
		q=n/20;
		printf("\nNumbers of 20: %d",q);
		n=n%20;
		goto fourth;
	}
	fourth:
	{
		r=n/10;
		printf("\nNumbers of 10: %d",r);
		n=n%10;
		goto fifth;
	}
	fifth:
	{
		s=n/5;
		printf("\nNumbers of 5: %d",s);
		n=n%5;
		goto sixth;
	}
	sixth:
	{
		t=n/2;
		printf("\nNumbers of 2: %d",t);
		n=n%2;
		goto seventh;
	}
	seventh:
	{
		u=n/1;
		printf("\nNnumbers of 1: %d",u);
		n=n%1;
		goto end;
	}
	end:
	printf("\n\nEnd of the Program");
	getch();
}
