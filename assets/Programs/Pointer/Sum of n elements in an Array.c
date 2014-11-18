/* Program to find the Sum of n elements in an Array also display the elements
Numbers, Values, and Address */
#include<stdio.h>
#include<conio.h>
main()
{
   int a[5]={10,20,30,40,50};
   int sum=0,*j,i;
   j=a;
   for(i=0;i<5;i++)
   {
      printf("\nNumber: %d\t Value: %d\tAddress: %u",i,*j,j);
      sum=sum+*j;
      j++;
   }
   printf("\n\nSum is: %d\n",sum);
   getch();
}
