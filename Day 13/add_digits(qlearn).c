#include <stdio.h>

int main() {
    int n,sum=0,total=0;
    scanf("%d",&n);
    while(n!=0){
      sum=sum+n%10;
      n/=10;
    }
    while(sum!=0){
        total=total+sum%10;
        sum/=10;
    }
    
    printf("%d",total);
    return 0;
}