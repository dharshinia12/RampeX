#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int count=0;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++) {
        if(isupper(str[i])) {
            count++;
        }
    }
    printf("Number of uppercase characters: %d\n", count);
    return 0;
}
