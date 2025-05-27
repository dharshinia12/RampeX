#include <stdio.h>

int main() {
    int n1,n2,sum=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    for(int i=n1;i<=n2;i++){
        sum+=i;
    
    }
    printf("%d",sum);
    return 0;
}