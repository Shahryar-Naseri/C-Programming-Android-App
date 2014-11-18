/* Simple C Program to perform Arithmetic operations */
#include<stdio.h>
#include<conio.h>
main()
{
   int a, b, add, subtract, multiply;
   float divide;
   printf("Enter two integers:\n");
   scanf("%d%d", &a, &b);
   add = a + b;
   subtract = a - b;
   multiply = a * b;
   divide = a / (float)b;   //typecasting
   printf("Sum = %d\n",add);
   printf("Difference = %d\n",subtract);
   printf("Multiplication = %d\n",multiply);
   printf("Division = %.2f\n",divide);
   getch();
}
