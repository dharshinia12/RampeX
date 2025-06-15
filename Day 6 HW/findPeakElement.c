#include <stdio.h>
int findPeakElement(int arr[], int n) {
    for (int i=0;i<n;i++) {
        if (i==0 && arr[i]>=arr[i+1])
            return arr[i];
        else if (i==n-1 && arr[i]>=arr[i-1])
            return arr[i];
        else if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
            return arr[i];
    }
    return -1;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int peak=findPeakElement(arr,n);
    printf("Peak element is %d\n",peak);
    return 0;
}
