/*Program to print Factorial number using Function no return value argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   void factorial(int);
   int n;
   printf("Enter number: ");
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
   printf("\nFactorial = %d",fac);
}
