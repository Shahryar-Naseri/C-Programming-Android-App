/* Program to check whether a year is Leap year or not */
#include<stdio.h>
#include<conio.h>
int main(){
      int year;
      printf("Enter a year: ");
      scanf("%d",&year);
      if(year%4 == 0)
      {
          if( year%100 == 0)
          {
              if ( year%400 == 0)
                 printf("%d is a Leap year.", year);
              else
                 printf("%d is not a Leap year.", year);
          }
          else
             printf("%d is a Leap year.", year );
      }
      else
         printf("%d is not a Leap year.", year);
      getch();
}
