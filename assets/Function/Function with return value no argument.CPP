/*function return value no argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   int getsum(),x,y;
   x=getsum();
   printf("%d",x);
   y=getsum();
   printf("%d",y);
   getch();
}
int getsum()
{
   int a,b,c;
   printf("Enter a&b");
   scanf("%d%d",&a,&b);
   c=a+b;
   return(c);
}