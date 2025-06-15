#include <stdio.h>
void countZerosOnes(int arr[], int n, int *zeros, int *ones) {
    *zeros = 0;
    *ones = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            (*zeros)++;
        else if (arr[i] == 1)
            (*ones)++;
        else
            printf("Warning: Invalid input '%d' at index %d (only 0s and 1s allowed).\n", arr[i], i);
    }
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (only 0s and 1s):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int zeros, ones;
    countZerosOnes(arr, n, &zeros, &ones);
    printf("Number of 0s = %d\n", zeros);
    printf("Number of 1s = %d\n", ones);
    return 0;
}
