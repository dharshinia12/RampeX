#include <stdio.h>

int main() {
    int a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    printf("The Result is %d\n",a<<b);
    printf("The Result is %d",a>>b);
    return 0;
}