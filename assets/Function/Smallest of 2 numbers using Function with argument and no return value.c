/* Program to find Smallest of 2 numbers using Function with argument 
and no return value */
#include<stdio.h>
#include<conio.h>
main()
{
   void smallest(int,int);
   int a,b;
   printf("Enter A: ");
   scanf("%d",&a);
   printf("Enter B: ");
   scanf("%d",&b);
   smallest(a,b);
   getch();
}
void smallest(int x,int y)
{
   if(x<y)
   {
      printf("The Smallest of two numbers is = ");
      printf("%d",x);
   }
   else
   {
      printf("The Smallest of two numbers is = ");
      printf("%d",y);
   }
}
