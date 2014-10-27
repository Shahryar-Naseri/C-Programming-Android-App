/*Program to print factorial number using functions return value argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   int factorial(int);
   int n,x;
   printf("enter no");
   scanf("%d",&n);
   x=factorial(n);
   printf("%d",x);
   getch();
}
int factorial(int n)
{
   int fac=1;
   while(n>0)
   {
      fac*=n;
      n-=1;
   }
   return(fac);
}