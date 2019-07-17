#include<stdio.h>
int main() {
  int a,b,c,big=0;
  scanf("%d %d %d",&a,&b,&c);
  big = a>b ? (a>c ? a:c) : (b>c ? b:c);
  printf("%d\n",big);
  return 0;
}  
