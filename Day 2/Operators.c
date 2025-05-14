#include <stdio.h>

int main() {
    int a=10;
    int b=15;
    int c=12;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b*c;
    int div=a/b;
    int mod=a%b;
    printf("sum of %d and %d is %d\n",a,b,sum);
    printf("sub of %d and %d is %d\n",a,b,sub);
    printf("mul of %d,%d and %d is %d\n",a,b,c,mul);
    printf("Divisiion of %d and %d is %d\n",a,b,div);
    printf("Modulo of %d and %d is %d\n",a,b,mod);
    return 0;
}