/* Program to print whether a number is Prime or not using Function with 
no retunrn value and arguments */
#include<stdio.h>
#include<conio.h>
main()
{
   void prime();
   prime();
   getch();
}
void prime()
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
