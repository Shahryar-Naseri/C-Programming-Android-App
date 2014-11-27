/* Program to Print Diamond of Stars */

#include<stdio.h>
#include<conio.h>

main()
{
    int i, j, n, space = 1;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    space = n - 1;
      
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= space; j++)
        {
            printf(" ");
        }
            
        space--;
            
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
		
        printf("\n");
    }
      
    space = 1;
      
    for(i = 1; i <= n - 1; i++)
    {
        for(j = 1; j <= space; j++)
        {
            printf(" ");
        }
            
        space++;
            
        for(j = 1; j <= 2 * (n - i) - 1; j++)
        {
            printf("*");
        }
            
        printf("\n");
    }
      
    getch();
}
                  
