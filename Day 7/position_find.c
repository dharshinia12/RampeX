#include <stdio.h> 
int main() {
    int arr[5]={10, 20, 30, 40, 50};
    int target=30;
    int i,found=0;
    for(i=0;i<5;i++) {
        if(arr[i]==target) {
            found=1;
            
        }
    }
    if(found) {
            printf("Element found at index: %d\n",i);
    }
    else{
            printf("Element not found.\n");
    }
    return 0; 
}
