#include<stdio.h>
int main(){
  int a=3,b=5,c;
  int *x=&a;
  int *y=&b;
  int z=*x+*y;
  printf("Addition of %d and %d is %d",a,b,z);
  return 0;
}