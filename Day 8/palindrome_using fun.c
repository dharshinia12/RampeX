#include <stdio.h>
int ispalindrome(int num){
    int rev=0,original=num;
    while(num!=0){
    rev=rev*10+num%10;
    num/=10;
    }
     if(original==rev){
       return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (ispalindrome(n)) {
        printf("The number is a palindrome\n");
    } else {
        printf("The number is not a palindrome\n");
    }
    return 0;
}
