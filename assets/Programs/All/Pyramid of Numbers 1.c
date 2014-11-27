/* Program to Print Pyramid of Numbers 1 */

#include<stdio.h>
#include<conio.h>

main()
{
    int n, c, d, space, num = 1;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    space = n - 1;
      
    for(d = 1; d <= n; d++)
    {
        num = d;
            
        for(c = 1; c <= space; c++)
        {
            printf(" ");
        }
            
        space--;
            
        for(c = 1; c <= d; c++)
        {
            printf("%d", num);
            num++;
        }
            
        num--;
        num--;
            
        for(c = 1; c < d; c++)
        {
            printf("%d", num);
            num--;
        }
            
        printf("\n");
    }
      
    getch();
}
