/* Program to Write a String to a File */
#include<stdio.h>
#include<conio.h>
main()
{
   char c[1000];
   FILE *fptr;
   fptr=fopen("MyFile.txt","w");
   if(fptr==NULL){
      printf("Error!");
      getch();
      exit(1);
   }
   printf("Enter a sentence:\n\n");
   gets(c);
   fprintf(fptr,"%s",c);
   fclose(fptr);
   getch();
}
