/* Program to find a number is Even or Odd using Function with 
argument and no return value */
#include<stdio.h>
#include<conio.h>
main()
{
   void even(int);
   int a;
   printf("Enter number: ");
   scanf("%d",&a);
   even(a);
   getch();
}
void even(int x)
{
   int y;
   y=x;
   if(y%2==0)
   {
      printf("\n%d is an Even number",y);
   }
   else
   {
      printf("\n%d is an Odd number",y);
   }
}
