#include <stdio.h>
int main() {
    int num[5];
    printf("Enter the array:");
    for(int i=0;i<5;i++){
          scanf("%d",&num[i]);
          printf("%d",num[i]);
    }
    return 0;
}