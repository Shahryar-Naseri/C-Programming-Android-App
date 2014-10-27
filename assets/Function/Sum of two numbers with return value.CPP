/*Sum of two no using function return value*/
#include<stdio.h>
#include<conio.h>
main()
{
   int sum();
   int x;
   x=sum();
   printf("%d",x);
   getch();
}
int sum()
{
   int a,b,c;
   printf("Enter a,b");
   scanf("%d%d",&a,&b);
   c=a+b;
   return(c);
}