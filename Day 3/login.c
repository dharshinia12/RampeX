#include <stdio.h>
#include <string.h>
int main() {
    char username[20], password[20];
    const char correct_username[] = "user123";
    const char correct_password[] = "pass123";
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed! Invalid username or password.\n");
    }

    return 0;
}
