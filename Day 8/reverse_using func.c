#include <stdio.h>
int reverse(int num){
    int rev=0;
    while(num!=0){
    rev=rev*10+num%10;
    num/=10;
    }
    return rev;
}
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("the reverse of the number is:%d",reverse(n));
    return 0;
}