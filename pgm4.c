#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the second value: ");
    scanf("%d", &b);
    a = a + b; 
    b = a - b;  
    a = a - b; 

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
