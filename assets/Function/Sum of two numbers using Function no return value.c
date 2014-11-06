/*Sum of two numbers using Function no return value no argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   void sum();
   sum();
   getch();
}
void sum()
{
   int a,b,c;
   printf("Enter A and B:\n\n");
   scanf("%d%d",&a,&b);
   c=a+b;
   printf("\nSum = %d",c);
}
