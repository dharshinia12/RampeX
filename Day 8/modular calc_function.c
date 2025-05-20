#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main() {
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    
      printf("Addition %d\n",add(a,b));
     
      printf("Subtraction %d\n",sub(a,b));

      printf("Multiplication %d\n",mul(a,b));
     
      printf("Division %d\n",div(a,b));
    return 0;
}