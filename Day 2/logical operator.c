#include <stdio.h> 
int main() {
    int age;
    int lic;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your license:");
    scanf("%d",&lic);
    if(age>=18&&lic==1){
        printf("You are Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}