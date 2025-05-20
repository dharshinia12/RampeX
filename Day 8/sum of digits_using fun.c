#include <stdio.h>
int sum_digits(int num){
    int sum=0;
    while(num!=0){
    sum=sum+num%10;
    num/=10;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Sum of digits: %d\n", sum_digits(n));
    return 0;
}