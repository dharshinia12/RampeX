#include <stdio.h>
int reverse(int n){
    if(n==0)
    return 0;
    printf("%d\n",n);
    return reverse(n-1);
}
int main() {
    int num;
     printf("%d\n",reverse(12));
    return 0;
}