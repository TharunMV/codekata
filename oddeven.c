#include<stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  if(n<0)
  printf("Invalid\n");
  else {
    if(n%2==0)
    printf("Even\n");
    else
    printf("Odd\n");
 }
} 
