/*Program to print factorial number using functions no return value argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   void factorial(int);
   int n;
   printf("enter no");
   scanf("%d",&n);
   factorial(n);
   getch();
}
void factorial(int n)
{
   int fac=1;
   while(n>0)
   {
      fac*=n;
      n-=1;
   }
   printf("%d",fac);
}