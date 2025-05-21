#include <stdio.h>
    int power(int x,int y){
        int result=1;
        for(int i=1;i<=y;i++){
            result*=x;
        }
        return result;
    }
int main() {
    int x,y;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    printf("Power of %d and %d is:%d",x,y,power(x,y));
    return 0;
}