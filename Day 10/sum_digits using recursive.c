#include <stdio.h>
int sum_digits(int n){
    int sum=0,i;
    if(n==0){
        return 0;
    }
    else
     return sum_digits(n/10)+n%10;
}
int main() {
    int i,num;
    printf("Enter num:");
    scanf("%d",&num);
    printf("The sum of digits is:%d",sum_digits(num));
    return 0;
}