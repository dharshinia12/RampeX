#include <stdio.h>
void replaceWithRightSum(int arr[], int n) {
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i];
        arr[i] = sum;
        sum += current;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    replaceWithRightSum(arr, n);
    printf("Updated array:\n");
    printArray(arr, n);
    return 0;
}
