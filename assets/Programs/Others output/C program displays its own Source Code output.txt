/* Program to display its own Source Code */
#include<stdio.h>
#include<conio.h>
int main() {
    FILE *fp;
    char c;
    fp = fopen(__FILE__,"r");
    do {
         c = getc(fp);
         putchar(c);
    }
    while(c != EOF);
    fclose(fp);
    getch();
}
