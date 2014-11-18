/* Program to find Squar of a number using Function with return value 
and argument */
#include<stdio.h>
#include<conio.h>
main()
{
   int squar(int);
   int a,b;
   printf("Enter number: ");
   scanf("%d",&a);
   b=squar(a);
   printf("Square of %d = %d",a,b);
   getch();
}
int squar(int a)
{
   int x;
   x=a*a;
   return(x);
}
