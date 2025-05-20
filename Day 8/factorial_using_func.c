#include <stdio.h>
int factorial(int n){
int fact=1;
for(int i=1;i<=n;i++){
fact*=i;
}
return fact;
}
int main() {
  int num;
  printf("Enter num:");
  scanf("%d",&num);
  printf("The Factorial of %d is:%d",num,factorial(num));
  
    return 0;
}