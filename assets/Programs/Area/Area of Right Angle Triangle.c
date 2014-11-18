/* Program to calculate Area of Right Angle Triangle */
#include<stdio.h>
#include<conio.h>

int main() {
   int base, height;
   float area;

   printf("Enter the base of Right Angle Triangle: ");
   scanf("%d", &base);

   printf("\nEnter the height of Right Angle Triangle: ");
   scanf("%d", &height);

   area = 0.5 * base * height;
   printf("\nArea of Right Angle Triangle: %f", area);

   getch();
}
