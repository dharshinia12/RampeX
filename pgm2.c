#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);
    return 0;
}