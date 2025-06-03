#include <stdio.h>
#include <string.h>
void rotateLeft(char str[], int n) {
    int len=strlen(str);
    n=n%len;  
    for (int r=0;r<n;r++) {
        char first=str[0];
        for (int i=0;i<len-1;i++) {
            str[i]=str[i+1];
        }
        str[len-1]=first;
    }
}
int main() {
    char str[100];
    int n;

    printf("Enter a string: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0'; 
    printf("Enter number of rotations: ");
    scanf("%d", &n);
    rotateLeft(str, n);
    printf("Rotated string: %s\n", str);
    return 0;
}
