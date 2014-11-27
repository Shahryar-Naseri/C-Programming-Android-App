/* Program to Print Pattern of Characters 1 */

#include<stdio.h>
#include<conio.h>

main()
{
    int i, j;
    char input, temp = 'A';
      
    printf("Enter upper-case character you want in triangle at last row: ");
    scanf("%c", &input);
    printf("\n");
      
    for(i = 1; i <= (input - 'A' + 1); i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", temp);
        }
            
        temp++;
        printf("\n");
    }
      
    getch();
}
