/* Program to Print Pyramid of Stars 2 */

#include<stdio.h>
#include<conio.h>

main()
{
    int i, j, n, space;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    for(i = n; i >= 1; i--)
    {
        for(space = 0; space < n - i; space++)
        {
            printf(" ");
        }
        for(j = i; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        for(j = 0; j < i - 1; j++)
        {
            printf("*");
        }
            
        printf("\n");
    }
      
    getch();
}
