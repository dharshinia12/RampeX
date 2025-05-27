#include <stdio.h>
int main() {
    char name[100];
    printf("Enter your Name:");
    fgets(name,100,stdin);
    printf("%s",name);
    return 0;
}


