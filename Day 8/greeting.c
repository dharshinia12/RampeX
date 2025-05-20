#include <stdio.h>
void greet(char name[],char role[]){
       printf("Hello %s Welcome to %s department",name,role);
}
int main() {
    char name[100],role[100];
    printf("Enter name:");
    scanf(" %s",&name);
    printf("Enter the role:");
    scanf(" %s",&role);
    greet(name,role);
    return 0;
}