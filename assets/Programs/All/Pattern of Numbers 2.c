/* Program to Print Pattern of Numbers 2 */

#include<stdio.h>
#include<conio.h>

main()
{
    int i, j, n;
      
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("\n");
      
    for(i = n; i >= 1; i--)
    {
        for(j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
            
        printf("\n");
    }
      
    getch();
}
