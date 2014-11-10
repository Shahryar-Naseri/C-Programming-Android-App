/* Program to find a number is Even or Odd using Function with 
return value and no argument */
#include<stdio.h>
#include<conio.h>
main()
{
   int even(),x;
   x=even();
   getch();
}
int even()
{
   int a,c;
   printf("Enter number: ");
   scanf("%d",&a);
   if(a%2==0)
   {
      printf("\n%d is an Even number",a);
      c=a;
   }
   else
   {
      printf("\n%d is an Odd number",a);
      c=a;
   }
   return(c);
}
