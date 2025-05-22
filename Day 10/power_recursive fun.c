#include <stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}
int main() {
    int num1,num2;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    printf("The power is:%d",power(num1,num2));
    return 0;
}