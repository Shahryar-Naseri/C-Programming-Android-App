/*function no return value argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   void getsum(int,int);
   int a,b;
   printf("Enter a&b");
   scanf("%d%d",&a,&b);
   getsum(a,b);
   getch();
}
void getsum(int x,int y)
{
   int z;
   z=x+y;
   printf("%d",z);
}