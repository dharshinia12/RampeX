#include <stdio.h>
int divisors(int n) {
  int sum=0;
  for(int i=1;i<=n;i++){
      if(n%i==0){
          printf("%d ",i);
           sum+=i;
      }
  }
  return sum;
}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("\nNumber of digits: %d\n",divisors(num));
    return 0;
}