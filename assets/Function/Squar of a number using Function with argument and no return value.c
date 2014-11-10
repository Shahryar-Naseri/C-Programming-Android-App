/* Program to find Squar of a number using Function with argument 
and no return value */
#include<stdio.h>
#include<conio.h>
main()
{
   void squar(int);
   int a;
   printf("Enter number: ");
   scanf("%d",&a);
   squar(a);
   getch();
}
void squar(int x)
{
   int y;
   y=x*x;
   printf("Square of %d = %d",x,y);
}
