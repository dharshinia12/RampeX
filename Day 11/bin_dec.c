#include <stdio.h>
int BinaryToDecimal(int n) {
    if (n==0)
        return 0;
     int digit= n%10;
    return digit+2*BinaryToDecimal(n/10);  
}
int main() {
    int num;
    printf("Enter a binary number:");
    scanf("%d", &num);
    printf("Decimal is: %d\n", BinaryToDecimal(num));
    return 0;
}


