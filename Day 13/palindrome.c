#include <stdio.h>

int main() {
    int num,rev=0,original;
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }
    if(original==rev){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
    return 0;
}