#include <stdio.h>

int main() {
    int num, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the digit to search: ");
    scanf("%d", &digit);
    while (num > 0) {
        if (num % 10 == digit)
            count++;
        num /= 10;
    }
    printf("The %d is repeated %d times\n",digit, count);
    return 0;
}
