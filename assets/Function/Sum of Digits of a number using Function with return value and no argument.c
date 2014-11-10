/* Program to print Sum of Digits of a number using Function with 
return value and no argument */
#include<stdio.h>
#include<conio.h>
main()
{
   int sum(),x;
   x=sum();
   printf("\nSum = %d",x);
   getch();
}
int sum()
{
   int num,a=0,b,c;
   printf("Enter number: ");
   scanf("%d",&num);
   while(num>0)
   {
   b=num%10;
   a=a+b;
   num=num/10;
   }
   c=a;
   return(c);
}
