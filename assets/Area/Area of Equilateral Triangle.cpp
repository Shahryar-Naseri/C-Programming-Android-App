/* Program to calculate Area of Equilateral Triangle */
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
   int side;
   float area, r_4;

   r_4 = sqrt(3) / 4;

   printf("Enter the Length of Side: ");
   scanf("%d", &side);

   area = r_4 * side * side;

   printf("\nArea of Equilateral Triangle: %f", area);
   getch();
}