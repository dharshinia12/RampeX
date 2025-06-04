#include <stdio.h>
int main() {
    char str[1000];
    int i = 0, length = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    while (str[length] != '\0') {
        length++;
    }
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
