#include <stdio.h>

int main() {
    int a;
    int b;
     printf("Enter two values");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is greater than %d",a,b);
    }else{
        printf("%d is less than %d",a,b);
    }
    return 0;
}