/* Program to Print Pattern of Numbers 5 */

#include<stdio.h>
#include<conio.h>

main()
{
    int n, c, k, space;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    space = 0;
      
    for(k = n; k >= 1; k--)
    {
        for(c = 1; c <= space; c++)
        {
            printf(" ");
        }
            
        space++;
            
        for(c = 1; c <= k; c++)
        {
            printf("%d", c);
        }
            
        printf("\n");
    }
      
    getch();
}
