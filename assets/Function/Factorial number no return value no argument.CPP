/*Program to print factorial number using functions no return value no
argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   void factorial();
   factorial();
   getch();
}
void factorial()
{
   int num,fac=1;
   printf("enter no");
   scanf("%d",&num);
   while(num>0)
   {
   fac*=num;
   num-=1;
   }
   printf("%d",fac);
}