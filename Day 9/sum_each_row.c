#include <stdio.h>
int main() {
    int array[2][2];
    int i,j,sum;
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("Enter element at position [%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
     for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ",array[i][j]);
        }
            printf("\n");
    }
    for(i=0;i<2;i++) {
          int Sum = 0;
        for(j=0;j<2;j++) {
          Sum+=array[i][j];
        }
            printf("Sum of row %d = %d\n",i,Sum);
    }
        printf("\n");
    return 0;
}

