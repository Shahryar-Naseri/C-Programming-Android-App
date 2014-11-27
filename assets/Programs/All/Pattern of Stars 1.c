/* Program to Print Pattern of Stars 1 */

#include<stdio.h>
#include<conio.h>

main()
{
    int n, c, k;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    for(c = 1; c <= n; c++)
    {
        for(k = 1; k <= c; k++)
        {
            printf("*");
        }
            
        printf("\n");
    }
      
    getch();
}
