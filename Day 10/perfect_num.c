#include <stdio.h>
int divisors(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main() {
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int number=divisors(n);
 if(n==number){
    printf("true");
}
else{
    printf("false");
}

    return 0;
}