#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int temp;
    j = 0; 
    for(i = 0; i < n; i++) {
        if(arr[i] < 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    printf("Array after moving negative elements to one side:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}