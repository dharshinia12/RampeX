#include <stdio.h>
int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5; 
    int pos = 2;
    int num = 25;
    for (int i=pos; i<=n; i++) {
        arr[i] = arr[i + 1];
    }
   
    n--;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}