/* Program to find Roots of a Quadratic equation */
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
  float a, b, c, determinant, r1,r2, real, imag;
  printf("Enter coefficients a, b and c:\n\n");
  scanf("%f%f%f",&a,&b,&c);
  determinant=b*b-4*a*c;
  if (determinant>0)
  {
      r1= (-b+sqrt(determinant))/(2*a);
      r2= (-b-sqrt(determinant))/(2*a);
      printf("\nRoots are: %.2f and %.2f",r1 , r2);
  }
  else if (determinant==0)
  {
    r1 = r2 = -b/(2*a);
    printf("\nRoots are: %.2f and %.2f", r1, r2);
  }
  else
  {
    real= -b/(2*a);
    imag = sqrt(-determinant)/(2*a);
    printf("\nRoots are: %.2f+%.2fi and %.2f-%.2fi", real, imag, real, imag);
  }
  getch();
}
