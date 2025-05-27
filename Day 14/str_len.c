#include <stdio.h>
int main() {
    char name[100];
    int length=0;
    printf("Enter your Name:");
    fgets(name,100,stdin);
    while(name[length]!='\0' && name[length] != '\n'){
        length++;
    }
    printf("%d",length);
    return 0;
}