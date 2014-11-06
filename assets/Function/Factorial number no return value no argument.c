/*Program to print Factorial number using Function no return value no argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   void factorial();
   factorial();
   getch();
}
void factorial()
{
   int num,fac=1;
   printf("Enter number: ");
   scanf("%d",&num);
   while(num>0)
   {
   fac*=num;
   num-=1;
   }
   printf("\nFactorial = %d",fac);
}
