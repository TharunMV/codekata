#include<stdio.h>
int main() {
  int k,x,i,sum=0;
  int a[k];
  scanf("%d %d",&k,&x);
  for(i=0;i<k;i++)
  scanf("%d",&a[i]);
  for(i=0;i<x;i++)
  sum = sum + a[i];
  printf("%d\n",sum);
  return 0;
}  
