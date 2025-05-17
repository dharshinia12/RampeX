#include <stdio.h>
int main() {
   int arr[5] = {1, 2, 3, 4, 5},sum=0;
   for(int i=0;i<5;i++)
   sum+=arr[i];
   printf("%d\n", sum); 
   float avg=sum/5;
    printf("%.2f\n", avg); 
   return 0;
}