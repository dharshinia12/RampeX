#include <stdio.h>
int main() {
    int n, i;e size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);  
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The array elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
