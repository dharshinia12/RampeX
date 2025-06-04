#include <stdio.h>
int main() {
    char str[1000];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str); 
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            str[i] = ' ';  
        }
        i++;
    }
    printf("Modified string: %s\n", str);
    return 0;
}
