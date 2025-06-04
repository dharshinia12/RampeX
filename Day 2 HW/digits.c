#include <stdio.h>
int main() {
    char str[1000];
    int i = 0;
    long number = 0; 
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    while (str[i] != '\0') {
        // If character is a digit
        if (str[i] >= '0' && str[i] <= '9') {
            number = number * 10 + (str[i] - '0');
        }
        i++;
    }
    printf("The number formed from digits is: %ld\n", number);
    return 0;
}
