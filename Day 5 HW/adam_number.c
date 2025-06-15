#include <stdio.h>

int main() {
    int num, rev = 0, temp, sqorg;
    int sqrev, revSqrev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    sqorg = num * num;

    temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

 sqrev = rev * rev;

    temp = sqrev;
    while (temp > 0) {
        revSqrev = revSqrev * 10 + temp % 10;
        temp /= 10;
    }

    if (sqorg == revSqrev)
        printf("%d is an Adam's number.\n", num);
    else
        printf("%d is not an Adam's number.\n", num);

    return 0;
}
