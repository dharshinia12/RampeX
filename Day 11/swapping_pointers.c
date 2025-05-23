#include<stdio.h>
int main(){
  int a=3,b=5,temp;
  int *x=&a;
  int *y=&b;
  temp=*x;
  *x=*y;
  *y=temp;
  printf("%d",a);
  printf("\n");
  printf("%d",b);
  return 0;
}