#include <stdio.h>
#include <ctype.h> 
int main() {
    char str[100];
    int i=0,specialCount=0;
    printf("Enter a string: ");
    fgets(str,100,stdin); 
    while (str[i]!='\0') {
        if (!isalpha(str[i]) && !isdigit(str[i]) && !isspace(str[i])) {
            specialCount++;
        }
        i++;
    }
    printf("Number of special characters: %d\n", specialCount);
    return 0;
}
