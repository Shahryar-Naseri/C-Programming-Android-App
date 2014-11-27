/* Program to Read a String from a File */
#include<stdio.h>
#include<conio.h>
main()
{
   char c[1000];
   FILE *fptr;
   if ((fptr=fopen("MyFile.txt","r"))==NULL){
       printf("Error! opening file");
       getch();
       exit(1);
   }
   fscanf(fptr,"%[^\n]",c);
   printf("Data from file:\n\n%s",c);
   fclose(fptr);
   getch();
}
