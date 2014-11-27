/* Program to Print Pattern of Stars 3 */

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
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
            
        printf("\n");
    }
      
    getch();
}
