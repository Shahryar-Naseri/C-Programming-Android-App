/* Program to Print Pattern of Stars 2 */

#include<stdio.h>
#include<conio.h>

main()
{
    int i, j, k, n;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    for(i = 1; i <= n; i++)
    {
        for(j = n; j >= 1; j--)
        {
            if(j <= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
            
        printf("\n");
    }
      
    getch();
}
