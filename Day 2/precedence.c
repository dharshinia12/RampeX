#include <stdio.h> 
int main() {
  int a,b,c,d,e;
  printf("Enter a,b,c,d:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  e=a+b*(a/b)-c;
  printf("Value of e is%d",e);
   return 0;
}    