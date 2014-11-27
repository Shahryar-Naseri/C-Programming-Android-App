/* Program to Print Pattern of Numbers 6 */

#include<stdio.h>
#include<conio.h>

main()
{
    int n, c, k, x = 1;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    for(c = 1; c <= n; c++)
    {
        for(k = 1; k <= c; k++)
        {
            printf("%d", x);
            x++;
        }
            
        x--;
            
        for(k = 1; k <= c - 1; k++)
        {
            x--;
            printf("%d", x);
        }
            
        printf("\n");
        x = 1;
    }
      
    getch();
}
