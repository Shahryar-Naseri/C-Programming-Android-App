/* Program to compute Remainder and Quotient  */
#include<stdio.h>
#include<conio.h>
main(){
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d",&dividend);
    printf("Enter divisor: ");
    scanf("%d",&divisor);
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    printf("\nQuotient = %d\n",quotient);
    printf("Remainder = %d",remainder);
    getch();
}
