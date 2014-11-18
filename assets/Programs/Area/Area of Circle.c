/* Program to calculate Area of Circle */
#include<stdio.h>
#include<conio.h>

int main() {
   float radius, area;

   printf("Enter the radius of Circle: ");
   scanf("%f", &radius);

   area = 3.14 * radius * radius;
   printf("\nArea of Circle: %f", area);

   getch();
}
