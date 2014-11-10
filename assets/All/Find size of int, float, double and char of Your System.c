/* Program to compute the size of int, float, double and char of Your System */
#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    float b;
    double c;
    char d;
    printf("Size of int: %d bytes\n",sizeof(a));
    printf("Size of float: %d bytes\n",sizeof(b));
    printf("Size of double: %d bytes\n",sizeof(c));
    printf("Size of char: %d byte\n",sizeof(d));
    getch();
}
