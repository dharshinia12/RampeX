#include <stdio.h>
#include <conio.h>  
#define MAX 100
int main() {
    char password[MAX];
    int i=0;
    char ch;
    printf("Enter your password: ");
    while (1) {
        ch = getch(); 
        if (ch == 13) { 
            break;
        } else if (ch == 8) { 
            if (i>0) {
                i--;
                printf("\b \b"); 
            }
        } else if (i < MAX - 1) {
            password[i++] = ch;
            printf("*"); 
        }
    }
    password[i] = '\0';
    printf("\n\nYou entered (actual password): %s\n", password);
    return 0;
}
