/* Program to calculate Area of Square */
#include<stdio.h>
#include<conio.h>

int main() {
   int side, area;

   printf("Enter the Length of Side: ");
   scanf("%d", &side);

   area = side * side;
   printf("\nArea of Square: %d", area);

   getch();
}