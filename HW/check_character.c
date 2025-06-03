#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char ch;
    int found=0;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    printf("Enter a character to search: ");
    scanf("%c",&ch);
    for (int i=0; str[i]!='\0';i++) {
        if (str[i]==ch) {
            printf("Present");
            found=1;
            break; 
        }
    }
    if (!found) {
        printf("Not Present");
    }
    return 0;
}
