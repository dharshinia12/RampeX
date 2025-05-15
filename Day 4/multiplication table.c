#include <stdio.h>
int main() {
    int i=1,num;
    printf("Enter the number:");
    scanf("%d",&num);
    while(i<=10){
    printf("%d*%d=%d\n",i,num,num*i);
    i++;
    }
    return 0;
}
