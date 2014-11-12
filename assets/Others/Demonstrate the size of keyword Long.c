/* Program to demonstrate the size of keyword Long */
#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    long int b;
    long long int c;
    printf("Size of int = %d bytes\n",sizeof(a));
    printf("Size of long int = %ld bytes\n",sizeof(b));
    printf("Size of long long int = %ld bytes",sizeof(c));
    getch();
}
