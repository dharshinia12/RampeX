

#include <stdio.h>

int main() {
   char ch;
   printf("Enter the Character:");
   scanf("%c",&ch);
  switch(ch){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      printf("It is a Vowel");
      break;
      default:
      printf("It is a consonant");
  }
  
       
    return 0;
}
