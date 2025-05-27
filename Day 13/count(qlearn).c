#include <stdio.h>
int count(long long num){
    int count=0;
    if(num==0){
        return 1;
    }
    if(num<0){
        num=-num;
    }
    while(num!=0){
        num/=10;
        count++;
    }
    return count;
}

int main() {
    long long num;
    scanf("%lld",&num);
    printf("%lld",count(num));
    return 0;
}