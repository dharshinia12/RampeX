#include <stdio.h>
void updateArray(int arr[], int n) {
    if (n <= 1) return;
    int prev = arr[0]; 
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        arr[i] = arr[i] * prev; 
        prev = current;         
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);
    updateArray(arr, n);
    printf("Updated array:  ");
    printArray(arr, n);
    return 0;
}
