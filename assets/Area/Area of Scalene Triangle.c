/* Program to calculate Area of Scalene Triangle */
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
   int s1, s2, angle;
   float area;

   printf("Enter Side1: ");
   scanf("%d", &s1);

   printf("\nEnter Side2: ");
   scanf("%d", &s2);

   printf("\nEnter included angle: ");
   scanf("%d", &angle);

   area = (s1 * s2 * sin((M_PI / 180) * angle)) / 2;

   printf("\nArea of Scalene Triangle: %f", area);
   getch();
}
