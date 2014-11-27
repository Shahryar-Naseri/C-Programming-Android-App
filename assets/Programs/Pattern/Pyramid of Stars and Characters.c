/* Program to Print Pyramid of Starts and Characters */

#include<stdio.h>
#include<conio.h>

main()
{
    int i, j, n, space, count = 1;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    space = n;
      
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < space; j++)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("*");
            if(i > 1 && count < i)
            {
                printf("A");
                count++;
            }
        }
            
        printf("\n");
        space--;
        count = 1;
    }
      
    getch();
}
