#include <stdio.h>
void printFibonacci(int n) {
    int a=0,b=1,c;
    for (int i = 0; i <=n; i++) {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
        }
    }
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printFibonacci(num);
    return 0;
}