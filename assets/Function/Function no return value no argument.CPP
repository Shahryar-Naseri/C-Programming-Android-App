/* function no return value no argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   void getsum();
   getsum();
   printf("      ");
   getsum();
   getch();
}
void getsum()
{
   int a,b,c;
   printf("Enter a&b");
   scanf("%d%d",&a,&b);
   c=a+b;
   printf("%d",c);
}