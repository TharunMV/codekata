#include<stdio.h>
int main() {
  char ch;
  int asc;
  scanf("%c",&ch);
  asc = (int)ch;
  if(asc>=97 && asc<=122)
  printf("Alphabet\n");
  else
  printf("No\n");
  return 0;
} 
