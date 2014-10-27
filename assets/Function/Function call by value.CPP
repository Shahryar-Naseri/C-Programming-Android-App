/*function call by value*/
#include<stdio.h>
#include<conio.h>
main()
{
void swap(int,int);
int a=10,b=20;
swap(a,b);
printf("%d%d",a,b);
getch();
}
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("%d%d",a,b);
}