/* Program to Check Vowel or Consonant */
#include<stdio.h>
#include<conio.h>
main(){
  char c;
  printf("Enter an alphabet: ");
  scanf("%c",&c);
  if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
       printf("\n%c is a Vowel.",c);
  else
       printf("\n%c is a Consonant.",c);
  getch();
}
