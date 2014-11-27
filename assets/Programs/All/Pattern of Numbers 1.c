/* Program to Print Pattern of Numbers 1 */

#include<stdio.h>
#include<conio.h>

main()
{
    int i, j, n;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        } 
            
        printf("\n");
    }
      
    getch();
}
