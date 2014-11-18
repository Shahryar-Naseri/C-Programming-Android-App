/* Program to print whether a number is Prime or not using Function with 
retunrn value and no argument */
#include<stdio.h>
#include<conio.h>
main()
{
   int prime(),x;
   x=prime();
   getch();
}
int prime()
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
   printf("\n%d is not a Prime number",num);
   else
   printf("\n%d is a Prime number",num);
}
