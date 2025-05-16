#include <stdio.h>
int main() {
  int i,isPrime,num;
  printf("Enter the number:");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
      if(num%i==0){
          isPrime=0;
          printf("%d is not  a prime",num);
          break;
      }
      else{
          printf("%d is a prime",num);
          break;
  }
  
}
    return 0;
}

