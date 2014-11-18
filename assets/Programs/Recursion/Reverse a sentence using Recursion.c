/* Program to Reverse a sentence using Recursion and without using Strings. */
#include<stdio.h>
#include<conio.h>
void Reverse();
int main()
{
    printf("Enter a sentence: ");
    Reverse();
    getch();
}
void Reverse()
{
    char c;
    scanf("%c",&c);
    if( c != '\n')
    {
        Reverse();
        printf("%c",c);
    }
}
