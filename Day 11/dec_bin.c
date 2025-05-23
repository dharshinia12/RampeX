#include <stdio.h>
void decimalToBinary(int n) {
    if (n==0)
        return;
    else
    decimalToBinary(n/2);
    printf("%d", n%2);
}
int main() {
  printf("Binary is: ");
  decimalToBinary(10);
    return 0;
}