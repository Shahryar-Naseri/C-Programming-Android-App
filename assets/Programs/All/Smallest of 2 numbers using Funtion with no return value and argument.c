/* Program to find Smallest of 2 numbers using Funtion with no return value 
and argument */
#include<stdio.h>
#include<conio.h>
main()
{
   void smallest();
   smallest();
   getch();
}
void smallest()
{
   int a,b;
   printf("Enter A: ");
   scanf("%d",&a);
   printf("Enter B: ");
   scanf("%d",&b);
   if(a<b)
   {
      printf("The Smallest of two numbers is = ");
      printf("%d",a);
   }
   else
   {
      printf("The Smallest of two numbers is = ");
      printf("%d",b);
   }
}
