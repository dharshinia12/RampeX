#include <stdio.h>

int main() {
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    int result=(age>=18)?printf("Eligible"):printf("Not eligible");
    scanf("%s",&result);
    return 0;
}