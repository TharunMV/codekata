#include<stdio.h>
int main() {
  char ch;
  int asc;
  scanf("%c",&ch);
  asc = (int)ch;
  if(asc>=97 && asc<=122) {
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    printf("Vowel\n");
    else
    printf("Consonant\n");
  }
  else
  printf("Invalid\n");
  return 0;
}  
