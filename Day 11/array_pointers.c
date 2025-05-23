#include <stdio.h>
int main() {
    int arr[100]={2,3,4,3,6};
    int *ptr=arr;
    printf("The array elements are:");
    for(int i=0;i<5;i++){
    printf("\n%d",*(ptr+i));
    }

    return 0;
}