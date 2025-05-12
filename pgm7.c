#include <stdio.h>
int main() {
    char name[100];
    float salary;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your salary: ");
    scanf("%f", &salary);
    printf("Name: %s", name);
    printf("Salary: %.2f\n", salary);
    return 0;
}
