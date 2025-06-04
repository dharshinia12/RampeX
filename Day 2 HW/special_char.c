#include <stdio.h>
#include <ctype.h>  
int main() {
    char str[1000];
    int i = 0, j;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1; 
    i = 0;
    while (i < j) {
        if (!isalnum(str[i])) {
            i++;
        }
        else if (!isalnum(str[j])) {
            j--;
        }
        else {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }
    printf("Modified string: %s\n", str);
    return 0;
}
