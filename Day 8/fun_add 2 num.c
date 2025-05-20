#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int main() {
    int a,b,sum;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
     sum=add(a,b);
     printf("%d",sum);
    return 0;
}