/* Program to Print Pascal Triangle */

#include<stdio.h>
#include<conio.h>

long fact(int);

main()
{
    int line, i, j;
      
    printf("Enter the number of lines: ");
    scanf("%d", &line);
    printf("\n");
      
    for(i = 0; i < line; i++)
    {
        for(j = 0; j < line - i - 1; j++)
        {
            printf(" ");
        }    
        for(j = 0; j <= i; j++)
        {
            printf("%ld ", fact(i) / (fact(j) * fact(i - j)));
        }
            
        printf("\n");
    }
      
    getch();
}

long fact(int num)
{
    long f = 1;
    int i = 1;
     
    while(i <= num)
    {
        f = f * i;
        i++;
    }
     
    return f;
}
