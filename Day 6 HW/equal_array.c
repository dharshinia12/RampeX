#include <stdio.h>
int main() {
    int n, i, equal = 1;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int A[n], B[n];
    printf("Enter elements of array A:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter elements of array B:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }
    for(i = 0; i < n; i++) {
        if(A[i] != B[i]) {
            equal = 0;
            break;
        }
    }
    if(equal)
        printf("Arrays are equal\n");
    else
        printf("Arrays are not equal\n");

    return 0;
}