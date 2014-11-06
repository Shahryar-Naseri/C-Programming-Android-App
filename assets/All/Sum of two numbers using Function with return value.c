/*Sum of two no using Function return value*/
#include<stdio.h>
#include<conio.h>
main()
{
   int sum();
   int x;
   x=sum();
   printf("\nSum = %d",x);
   getch();
}
int sum()
{
   int a,b,c;
   printf("Enter A and B:\n\n");
   scanf("%d%d",&a,&b);
   c=a+b;
   return(c);
}
