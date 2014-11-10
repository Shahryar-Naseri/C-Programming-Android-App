/* Program to print Sum of Digits of a number using Function with 
argument and no return value */
#include<stdio.h>
#include<conio.h>
main()
{
   void sum(int);
   int num;
   printf("Enter number: ");
   scanf("%d",&num);
   sum(num);
   getch();
}
void sum(int x)
{
   int y=x,a=0,b;
   while(y>0)
   {
      b=y%10;
      a=a+b;
      y=y/10;
   }
   printf("\nSum = %d",a);
}
