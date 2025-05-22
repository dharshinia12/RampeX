#include <stdio.h>
int main(){
 int arr[3][3][3],sum=0;
 for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            for (int k=0;k<3;k++) {
            printf("Enter element at position [%d ][%d ][%d ]:",i,j,k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         for(int k=0;k<3;k++){
             printf("%d ",arr[i][j][k]);
            
         }
           printf("\n");
      }
  }
  for(int i=0;i<3;i++) {
          int Sum = 0;
        for(int j=0;j<3;j++) {
            for(int k=0;k<3;k++)
          Sum+=arr[i][j][k];
        }
            printf("Sum of %d matrix = %d\n",i+1,Sum);
    }
        printf("\n");
    return 0;
}