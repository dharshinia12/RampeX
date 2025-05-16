#include <stdio.h>
int main() {
    int num,sum=0;
    printf("Enter the num:");
    scanf("%d",&num);
   while(num!=0){
   sum=sum+num%10;
   num/=10;
   }
   printf("Reversed number: %d\n", sum);
    return 0;
    
}
