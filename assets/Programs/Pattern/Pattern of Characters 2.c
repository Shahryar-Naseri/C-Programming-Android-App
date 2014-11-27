/* Program to Print Pattern of Characters 2 */

#include<stdio.h>
#include<conio.h>

main()
{
    int n, c, k, space = 0;
    char ch = 'A';
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
    
    for(k = n; k >= 1; k--)
    {
        for(c = 1; c <= space; c++)
        {
            printf(" ");
        }
          
        space++;
          
        for(c = 1; c <= k; c++)
        {
            printf("%c", ch);
            ch++;
        }
          
        printf("\n");
        ch = 'A';
    }
    
    getch();
}
