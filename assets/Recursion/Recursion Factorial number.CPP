/* Recursion Factorial number */
#include<stdio.h>
#include<conio.h>
void main()
{
   int rec(int);
   int a,fact;
   printf("Enter any number: ");
   scanf("%d",&a);
   fact=rec(a);
   printf("Factorial value = %d",fact);
   getch();
}
rec(int x)
{
   int f;
   if(x==1)
   return(1);
   else
   f=x*rec(x-1);
   return(f);
}