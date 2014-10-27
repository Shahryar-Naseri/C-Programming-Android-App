/*function return value argument*/
#include<stdio.h>
#include<conio.h>
main()
{
   int getsum(int,int);
   int a,b,c;
   printf("Enter a&b");
   scanf("%d%d",&a,&b);
   c=getsum(a,b);
   printf("%d",c);
   getch();
}
int getsum(int a,int b)
{
   int z;
   z=a+b;
   return(z);
}