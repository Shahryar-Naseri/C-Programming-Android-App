/* Program to print whether a number is Prime or not using Function with 
retunrn value and argument */
#include<stdio.h>
#include<conio.h>
main()
{
   int prime(int);
   int num,a;
   printf("Enter number: ");
   scanf("%d",&num);
   a=prime(num);
   getch();
}
int prime(int num)
{
   int i,f=0,y=num;
   for(i=2;i<y;i++)
   {
      if(y%i==0)
      f=1;
   }
   if(f==1)
   printf("\n%d is not a Prime number",num);
   else
   printf("\n%d is a Prime number",num);
   return(num);
}
