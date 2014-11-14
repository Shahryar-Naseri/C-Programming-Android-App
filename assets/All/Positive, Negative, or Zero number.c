/* Programt to find whether a number is Positive, Negative, or Zero */
#include<stdio.h>
#include<conio.h>
main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    if (num<=0)
    {
        if (num==0)
          printf("\nYou entered Zero.");
        else
          printf("\n%.2f is Negative.",num);
    }
    else
      printf("\n%.2f is Positive.",num);
    getch();
}
