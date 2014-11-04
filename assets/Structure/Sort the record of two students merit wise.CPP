/* Program to sort the record of two students merit wise */
#include<stdio.h>
#include<conio.h>
main()
{
	struct student
	{
		int rollno;
		char name[10];
		char college[10];
		int score;
	};
	struct student s[2],temp;
	int i,j;
	clrscr();
	printf("Enter the info of two students:\n\nRoll no\nName\nCollege Name\nScore\n\n");
	for(i=0;i<2;i++)
	scanf("%d%s%s%d",&s[i].rollno,&s[i].name,&s[i].college,&s[i].score);
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<2;j++)
		{
			if(s[i].score<s[j].score)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0;i<2;i++)
	printf("\n%d\n%s\n%s\n%d\n",s[i].rollno,s[i].name,s[i].college,s[i].score);
	int x=sizeof(s);
	printf("\nSize = %d",x);
	getch();
}