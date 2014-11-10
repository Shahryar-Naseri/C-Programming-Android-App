/* Program to find a number is Even or Odd using Function with 
no return value and argument */
#include<stdio.h>
#include<conio.h>
main()
{
   void even();
   even();
   getch();
}
void even()
{
   int a;
   printf("Enter number: ");
   scanf("%d",&a);
   if(a%2==0)
   {
      printf("\n%d is an Even number",a);
   }
   else
   {
      printf("\n%d is an Odd number",a);
   }
}
