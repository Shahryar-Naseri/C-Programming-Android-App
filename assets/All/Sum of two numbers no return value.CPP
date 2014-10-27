/*Sum of two no using function no return value no argument*/
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
   printf("Enter a,b");
   scanf("%d%d",&a,&b);
   c=a+b;
   printf("%d",c);
}