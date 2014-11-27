/* Program to Print Pyramid of Stars 1 */

#include<stdio.h>
#include<conio.h>

main()
{
    int row, c, n, temp;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    temp = n;
      
    for(row = 1; row <= n; row++)
    {
        for(c = 1; c < temp; c++)
        {
            printf(" ");
        }
              
        temp--;
              
        for(c = 1; c <= 2 * row - 1; c++)
        {
            printf("*");
        }
              
        printf("\n");
    }
      
    getch();
}
