/* Simple C Program to Multiply two Floating numbers entered by user */
#include<stdio.h>
#include<conio.h>
main( )
{
    float num1, num2, product;
    printf("Enter two numbers:\n\n");
    scanf("%f %f",&num1,&num2);
    product = num1*num2;
    printf("\nProduct = %f",product);
    getch();
}
