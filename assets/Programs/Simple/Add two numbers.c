/* Simple C Program to Add two numbers */
#include<stdio.h>
#include<conio.h>
main()
{
   int a, b, c;
   printf("Enter two numbers to add:\n");
   scanf("%d%d",&a,&b);
   c = a + b;
   printf("Sum of entered numbers = %d\n",c);
   getch();
}
