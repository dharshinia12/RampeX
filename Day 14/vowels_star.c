#include <stdio.h>
#include<ctype.h>
int main() {
    char str[100];
    int length=0,vowels=0,consonants=0;
    printf("Enter string:");
    fgets(str,100,stdin);
    while(str[length]!='\0' && str[length] != '\n'){
        char ch = tolower(str[length]);
        if (ch >= 'a' && ch <= 'z') 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            
         str[length]='*';
        
       length++;
    }
  printf("%s",str);
    return 0;
}
