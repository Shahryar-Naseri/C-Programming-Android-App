/* Program to find Squar of a number using Function with return value 
and no argument */
#include<stdio.h>
#include<conio.h>
main()
{
   int squar(),x;
   x=squar();
   printf("Square = %d",x);
   getch();
}
int squar()
{
   int a,b;
   printf("Enter number: ");
   scanf("%d",&a);
   b=a*a;
   return(b);
}
