/* Program to find Smallest of 2 numbers using Funtion with return value 
and argument */
#include<stdio.h>
#include<conio.h>
main()
{
   int smallest(int,int);
   int a,b,c;
   printf("Enter A: ");
   scanf("%d",&a);
   printf("Enter B: ");
   scanf("%d",&b);
   c=smallest(a,b);
   getch();
}
int smallest(int a,int b)
{
   int x,y;
   x=a;
   y=b;
   if(x<y)
   {
      printf("The Smallest of two numbers is = ");
      printf("%d",x);
      return(x);
   }
   else
   {
      printf("The Smallest of two numbers is = ");
      printf("%d",y);
      return(y);
   }
}
