#include <stdio.h>
int findFirstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            result = mid;
            high = mid - 1;  
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}
int isMajorityElement(int arr[], int n, int x) {
    int firstIndex = findFirstOccurrence(arr, n, x);
    if (firstIndex == -1)
        return 0; 
    if ((firstIndex + n / 2 < n) && arr[firstIndex + n / 2] == x)
        return 1;
    return 0;
}
int main() {
    int arr[] = {1, 2, 2, 2, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    if (isMajorityElement(arr, n, x))
        printf("%d appears more than %d times in the array.\n", x, n / 2);
    else
        printf("%d does NOT appear more than %d times in the array.\n", x, n / 2);

    return 0;
}
