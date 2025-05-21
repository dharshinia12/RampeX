#include <stdio.h>
int countDigits(int number) {
    int count=0;
    if (number==0)
        return 1;   
    while (number!=0) {
        number/=10;
        count++;
    }
    return count;
}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Number of digits: %d\n",countDigits(num));
    return 0;
}