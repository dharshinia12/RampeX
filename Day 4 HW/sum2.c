#include <stdio.h>
void replaceWithSumOfOtherElements(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];
    for (int i = 0; i < n; i++)
        arr[i] = totalSum - arr[i];
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
    replaceWithSumOfOtherElements(arr, n);
    printf("Updated array:\n");
    printArray(arr, n);
    return 0;
}
