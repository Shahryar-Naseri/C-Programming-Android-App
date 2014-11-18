/* Program to print Sum of Digits of a number using Function with 
return value and argument */
#include<stdio.h>
#include<conio.h>
main()
{
   int sum(int);
   int num,c;
   printf("Enter number: ");
   scanf("%d",&num);
   c=sum(num);
   getch();
}
int sum(int num)
{
   int x=num,a=0,b;
   while(x>0)
   {
      b=x%10;
      a=a+b;
      x=x/10;
   }
   printf("\nSum = %d",a);
   return(x);
}
