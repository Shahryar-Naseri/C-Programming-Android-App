/* Program to calculate Area of Rectangle */
#include<stdio.h>
#include<conio.h>

int main() {
   int length, breadth, area;

   printf("Enter the Length of Rectangle: ");
   scanf("%d", &length);

   printf("\nEnter the Breadth of Rectangle: ");
   scanf("%d", &breadth);

   area = length * breadth;
   printf("\nArea of Rectangle: %d", area);

   getch();
}
