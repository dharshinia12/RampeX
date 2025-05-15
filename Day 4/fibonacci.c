#include <stdio.h>
int main() {
    int num, i, first = 0, second = 1, next;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num >= 1) {
        printf("%d\n", first);
    }
    if (num >= 2) {
        printf("%d\n", second);
    }
    for (i = 3; i <= num; i++) {
        next = first + second;  
        printf("%d\n", next);    
        first = second;         
        second = next;          
    }
    printf("\n");
    return 0;
}